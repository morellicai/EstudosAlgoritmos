#include <stdio.h>

int ePar(int n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return ePar(n - 2);
        if(n == 1){
            return 1;
        } else {
            return 0;
        }
    }
}
int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (ePar(num) == 0){
        printf("O número %d é par.\n", num);
    } else if (ePar(num) == 1){
        printf("O número %d é ímpar.\n", num);
    }

    return 0;
}