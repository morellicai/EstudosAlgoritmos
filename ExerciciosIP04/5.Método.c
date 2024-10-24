#include <stdio.h>
#include <math.h>

// Função para calcular o valor absoluto
double valor_absoluto(double num) {
    return num < 0 ? -num : num;
}

// Função para calcular o quadrado de um número
double quadrado(double num) {
    return num * num;
}

// Função para calcular a raiz quadrada usando o método de Newton
double raiz_quadrada(double x) {
    double r = x / 2;  // Chute inicial
    
    // Enquanto a diferença for maior que 0.001, continue refinando
    while (valor_absoluto(quadrado(r) - x) >= 0.001) {
        r = (r + x / r) / 2;  // Atualiza o valor de r
    }
    
    return r;  // Retorna a raiz quadrada aproximada
}

int main() {
    double num;
    
    // Entrada do usuário
    printf("Digite um número real não negativo: ");
    scanf("%lf", &num);
    
    // Calcula e exibe a raiz quadrada aproximada
    double resultado = raiz_quadrada(num);
    printf("A raiz quadrada aproximada de %.0lf é %.4lf\n", num, resultado);
    
    return 0;
}