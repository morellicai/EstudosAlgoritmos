#include <stdio.h>
#include <stdlib.h>

void dds(int n){
    switch(n){
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda\n"); break;
        case 3: printf("Terça\n"); break;
        case 4: printf("Quarta\n"); break;
        case 5: printf("Quinta\n"); break;
        case 6: printf("Sexta\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Numero invalido!\n"); exit(1);
    }
}

int main (void){
    int dia;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    dds(dia);
    return 0;
}