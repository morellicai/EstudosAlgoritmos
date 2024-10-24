#include <stdio.h>

char sinalSoma(num, i){
    if (i < num - 1) {
        printf(" + ");
    }
    return 0;
}
int interacao(n){
    int soma = 0;

    for (int i = 0; i < n; i++) {
        int impar = 2 * i + 1;
        soma = soma + impar;
        printf("%d", impar);

        sinalSoma(n, i);
    }
    return soma;
}
int main(void) {
    int n = 0;

    printf("Digite um número natural n: ");
    scanf("%d", &n);

    printf("%d^2 = ", n);

    printf(" = %d\n", interacao(n));

    return 0;
}