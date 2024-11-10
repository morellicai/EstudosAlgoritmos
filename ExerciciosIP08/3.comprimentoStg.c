#include <stdio.h>

int len(char v[]){
    int i = 0;
    while(v[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char v[10] = "teste";
    printf("Comprimento: %d\n", len(v));
    return 0;
}