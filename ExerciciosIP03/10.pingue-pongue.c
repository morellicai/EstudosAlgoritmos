#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>  // Incluído para srand e rand

int main()
{
    setlocale(LC_ALL, "");
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    timeout(0);
    start_color();

    srand(time(NULL));

    int x = 1, y = 1, dx = -1, dy = -1, color;

    for (int i = 1; i <= 15; i++) {
        init_pair(i, i, COLOR_BLACK);
    }

    do
    {
        move(y, x);
        attron(COLOR_PAIR(color));
        printw("O");
        refresh();
        usleep(100000);

        move(y, x);
        printw(" ");
        refresh();

        if (x == 1 || x == COLS - 1)
        {
            dx = -dx;
            color = rand() % 15 + 1;
        }
        if (y == 1 || y == LINES - 1)
        {
            dy = -dy;
            color = rand() % 15 + 1;
        }

        x += dx;
        y += dy;

    } while (getch() == ERR);

    endwin();
    return 0;
}
