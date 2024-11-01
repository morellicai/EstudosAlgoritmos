#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

// Função para verificar se uma tecla foi pressionada
int kbhit(void) {
    struct termios oldt, newt;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    int ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1; // Tecla pressionada
    }

    return 0; // Nenhuma tecla pressionada
}

// Função para simular o _sleep() do Windows
void sleep_ms(int milliseconds) {
    usleep(milliseconds * 1000); // usleep aceita microsegundos
}

void sequencia(void) {
    static int n = 0;
    printf("%d,", n++);
    fflush(stdout);
}

int main(void) {
    while(!kbhit()) {
        sequencia();
        sleep_ms(1000);
    }
    return 0;
}