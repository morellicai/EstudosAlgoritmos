#include<stdio.h>
#include<locale.h>

int main (void) {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int placa;

    printf("Qual a sua placa?\n");
    scanf("%d", &placa);
    placa = placa % 10;

    if(placa == 1 || placa == 2) {
        printf("Seu rodizio é na segunda");
    } else if(placa == 3 || placa == 4) {
        printf("Seu rodizio é na terça");
    } else if(placa == 5 || placa == 6) {
        printf("Seu rodizio é na quarta");
    } else if(placa == 7 || placa == 8) {
        printf("Seu rodizio é na quinta");
    } else {
        printf("Seu rodizio é na sexta");
    }
}