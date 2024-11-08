#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3
#include <termios.h>
#include <unistd.h>

char getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);          // Salva configurações atuais do terminal
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);        // Desativa modo canônico e eco
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Aplica configurações
    ch = getchar();                          // Captura caractere
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // Restaura configurações
    return ch;
}

void clrscr() {
    printf("\033[H\033[J");
}

void exibe(char m[SIZE][SIZE]) {
    clrscr();
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", m[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---+---+---\n");
        }
    }
}

void usuario(char m[SIZE][SIZE]) {
    int i, j;
    do {
        printf("\nJogador, digite as coordenadas da jogada (linha e coluna): ");
        scanf("%d %d", &i, &j);
        i--; j--; 
    } while (i < 0 || i >= SIZE || j < 0 || j >= SIZE || m[i][j] != ' ');
    m[i][j] = 'X';
}

void computador(char m[SIZE][SIZE]) {
    int i, j;
    do {
        i = rand() % SIZE; 
        j = rand() % SIZE; 
    } while (m[i][j] != ' '); 
    m[i][j] = 'O'; 
}

int vencedor(char m[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (m[i][0] == m[i][1] && m[i][1] == m[i][2] && m[i][0] != ' ')
            return m[i][0];
        if (m[0][i] == m[1][i] && m[1][i] == m[2][i] && m[0][i] != ' ')
            return m[0][i];
    }
    // Verifica diagonais
    if (m[0][0] == m[1][1] && m[1][1] == m[2][2] && m[0][0] != ' ')
        return m[0][0];
    if (m[0][2] == m[1][1] && m[1][1] == m[2][0] && m[0][2] != ' ')
        return m[0][2];

    return ' ';
}

int main() {
    char m[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int j = 0, e, s;
    char v;
    printf ("par (0) ou impar (1) ? ");
    scanf("%d", &e);
    srand(time(NULL));
    s = rand() % 2;
    printf("Sorteado: %d\n", s);
    if (e == s){
        puts("Voce comeca!");
    } else {
        puts ("Eu comeco!");
    }
    printf("Pressione enter...");
    getch();
    do{
        exibe(m);
        if (e == s){
            usuario(m);
        } else {
            computador(m);
        }
        v = vencedor(m);
        s = !s;
    } while (++j <9 && v == ' ');
    exibe(m);
    switch(v){
        case ' ': puts("\nEmpate!\n"); break;
        case 'X': puts("\nVocê venceu!\n"); break;
        case 'O': puts("\nEu venci!\n"); break;
    }
    return 0;
}