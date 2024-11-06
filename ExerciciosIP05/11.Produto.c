#include <stdio.h>

int produto(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    return a + produto(a, b - 1);
}

int main(){
    int a, b;
    printf("Digite dois números naturais (a b): ");
    scanf("%d %d", &a, &b);

    int resultado = produto(a, b);
    printf("O produto de %d e %d é: %d\n", a, b, resultado);

    return 0;
}