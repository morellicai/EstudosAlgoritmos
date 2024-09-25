#include<stdio.h>

int main (void){
    int num1, num2, maior;
    printf("Quais os numeros? ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2){
        maior = num1;
    } else {
        maior = num2;
    }
    printf("%d", maior);
}