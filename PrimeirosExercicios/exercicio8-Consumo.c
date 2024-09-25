#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    float distperc, tlc, cmedio;

    printf("Escreva a distancia percorrida e o combustivel gasto\n");
    scanf("%f %f", &distperc, &tlc);

    cmedio = distperc / tlc;
    printf("O consumo médio total do seu carro é: %0.2f", cmedio);
    return 0;
}