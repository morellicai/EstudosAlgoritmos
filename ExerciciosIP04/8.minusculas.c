#include <stdio.h>

void minuscula (c){
    if(c >= 65 && c <= 90){
        printf("%c é maiúsculo", c);
    } else if(c >= 97 && c <= 122) {
        printf("%c não é maiúsculo", c);
        char maiusculo = c - 32;
        printf(", mas seu equivalente em maiúsculo é %c\n", maiusculo);
    } else {
        printf("%c não é uma letra", c);
    }
}

int main(void){
    char c;
    printf("Digite uma letra: ");
    scanf("%c", &c);

    minuscula(c);

    return 0;
}