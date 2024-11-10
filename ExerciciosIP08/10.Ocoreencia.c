#include <stdio.h>


int ocorrencias(char c, char s[]){
    int i, cont = 0;
    for(i = 0; s[i]!= '\0'; i++){
        if(s[i] == c){
            cont++;
        }
    }
    return cont;
}
int main(){
    char v[] = "banana";
    printf("Ocorrencias: %d\n",ocorrencias('a',v));
    return 0;
}