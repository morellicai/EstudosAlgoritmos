#include <stdio.h>
#include <ncurses.h>

void setColor(int color){
    attron(COLOR_PAIR(color));
}

int main(void){
    initscr();            
    start_color();        

    for (int i = 0; i < 8; i++)
    {
        init_pair(i + 1, i, COLOR_BLACK);
    }

    for (int c = 0; c < 8; c++)
    {
        setColor(c + 1);
        printw("Cor %d\n", c);
    }

    refresh();            
    getch();              
    endwin();             

    return 0;
}
// O executavel esta no "2.cores" pois para rodar esse codigo para mac é necessario outras coisas