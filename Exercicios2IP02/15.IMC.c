#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;
    printf("Digite o peso e a altura \n");
    scanf("%f %f", &peso, &altura);
    imc=peso/pow(altura, 2);
    printf("O imc é %0.1f \n", imc);
    if(imc > 30){
        printf("você esta acima do peso");
    } else if(imc < 18.5) {
        printf("você esta abaixo do peso");
    } else {
        printf("Você esta normal");
    }
}