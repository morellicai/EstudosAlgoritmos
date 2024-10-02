#include <stdio.h>
#include <ncurses.h>  // Para manipulação de cores e teclado
#include <unistd.h>  
#include <locale.h> 

void setColor(int color){
    attron(COLOR_PAIR(color));  // Define o par de cores
}

int main(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    initscr();
    start_color();
    cbreak();
    noecho();
    timeout(0); 
    keypad(stdscr, TRUE);
    curs_set(0);

    for (int i = 1; i <= 15; i++) {
        init_pair(i, i, COLOR_BLACK);
    }

    int rastroAtivo = 1;
    int cor = 1;
    int tecla;

    printw("Pressione 'R' para ativar/desativar o rastro.\n");
    printw("Pressione 'C' para mudar a cor do rastro.\n");
    printw("Pressione 'ESC' para sair.\n");
    refresh();

    while (1)
    {
        tecla = getch(); 

        if (tecla == 'R' || tecla == 'r')
        {
            rastroAtivo = !rastroAtivo;
        }
        else if (tecla == 'C' || tecla == 'c')
        {
            cor = (cor % 15) + 1; 
        }
        else if (tecla == 27)
        {
            break;
        }

        if (rastroAtivo)
        {
            setColor(cor);
            printw("X");
        }
        else
        {
            printw("\b ");
        }

        refresh();
        usleep(100000);
    }

    setColor(7);  
    printw("\nSaindo...\n");
    refresh();
    usleep(1000000);

    endwin();
}