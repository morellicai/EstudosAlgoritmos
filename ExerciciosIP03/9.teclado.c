#include <stdio.h>
#include <ncurses.h>  
#include <unistd.h>   
#include <locale.h>   

int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");  

    initscr();              
    cbreak();               
    noecho();      
    timeout(0);             
    curs_set(0);            

    printw("Pressione qualquer tecla para parar.\n");
    refresh();

    while (1)
    {
        int ch = getch();  

        if (ch != ERR) {   
            break;
        }

        printw("TESTE\n");
        refresh();         
        usleep(500000);    
    }

    printw("Programa encerrado.\n");
    refresh();             

    usleep(1000000);       
    endwin();

    return 0;
}
