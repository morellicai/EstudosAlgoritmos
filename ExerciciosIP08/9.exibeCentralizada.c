#include <stdio.h>
#include <string.h>

void centraliza(char *s, int y) {
    int comprimento = strlen(s);
    int x = (80 - comprimento) / 2;
    printf("\033[H\033[J"); // Limpa a tela
    printf("\033[%d;%dH%s", y, x, s); // Move o cursor para a linha y e coluna x, e imprime a string
}

int main(void) {
    char v[] = "Apenas um teste";
    centraliza(v, 13);
    return 0;
}
