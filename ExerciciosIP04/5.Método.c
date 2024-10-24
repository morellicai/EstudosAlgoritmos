#include <stdio.h>
#include <math.h>

double valor_absoluto(double num) {
    return num < 0 ? -num : num;
}

double quadrado(double num) {
    return num * num;
}

double raiz_quadrada(double x) {
    double r = x / 2;  

    while (valor_absoluto(quadrado(r) - x) >= 0.001) {
        r = (r + x / r) / 2; 
    }
    
    return r;
}

int main() {
    double num;

    printf("Digite um número real não negativo: ");
    scanf("%lf", &num);
    
    double resultado = raiz_quadrada(num);
    printf("A raiz quadrada aproximada de %.0lf é %.4lf\n", num, resultado);
    
    return 0;
}