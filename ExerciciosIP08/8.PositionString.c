#include <stdio.h>


int pos(char c, char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c){
            return i;
        }
        i++;
    }
    return -1;
}
int main(){
    char v[10] = "35171";
    printf("Posicaio do 1: %d\n", pos('1', v));
    printf("Posicaio do 9: %d\n", pos('9', v));
    return 0;
}