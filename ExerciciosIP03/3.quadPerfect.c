#include <stdio.h>

int main(void) {
    int n, soma = 0;

    printf("Digite um número natural n: ");
    scanf("%d", &n);

    printf("%d^2 = ", n);

    for (int i = 0; i < n; i++) {
        int impar = 2 * i + 1;
        soma = soma + impar;
        printf("%d", impar);

        if (i < n - 1) {
            printf(" + ");
        }
    }
     printf(" = %d\n", soma);

    return 0;
}
