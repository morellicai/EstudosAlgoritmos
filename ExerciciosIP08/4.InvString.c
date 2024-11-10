#include <stdio.h>

int len(char v[]){
    int i = 0;
    while(v[i] != '\0'){
        i++;
    }
    return i;
}
void rev(char v[]){
    int n = len(v);
    int i = n - 1;
    while (i >= 0){
        printf("%c", v[i]);
        i--;
    }
    printf("\n");
}
int main (){
    char v[10] = "ROMA";
    rev(v);
    puts(v);
    return 0;
}