#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "Portuguese_Brazil");

    float x, y;
    char o;
    printf("Qual o calculo que deseja fazer? ");
    scanf("%f %c %f", &x,&o,&y);

    if(o == '/' || o == ':'){
            if(y == 0){
            printf("Erro: Não é possivel dividir por 0.\n");
            }
        }
    switch(o) {
        case '+': printf("Valor = %.2f\n", x+y);
        break;
        case '-': printf("Valor = %.2f\n", x-y);
        break;
        case '*': printf("Valor = %.2f\n", x*y);
        break;
        case 'x': printf("Valor = %.2f\n", x*y);
        break;
        case '/': printf("Valor = %.2f\n", x/y);
        break;
        case ':': printf("Valor = %.2f\n", x/y);
        break;
        default: printf("Operador invalido: %c\n", o);
    }
}