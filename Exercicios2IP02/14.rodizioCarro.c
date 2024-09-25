#include<stdio.h>
#include<locale.h>
//agora com switch-case
int main (void) {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int placa;

    printf("Qual a sua placa?\n");
    scanf("%d", &placa);
    placa = placa % 10;

    switch (placa) {
    case 1:
        printf("Seu rodizio é na segunda");
        break;
    case 2:
        printf("Seu rodizio é na segunda");
        break;
    case 3:
        printf("Seu rodizio é na terça");
        break;
    case 4:
        printf("Seu rodizio é na terça");
        break;
    case 5:
        printf("Seu rodizio é na quarta");
        break;
    case 6:
        printf("Seu rodizio é na quarta");
        break;
    case 7:
        printf("Seu rodizio é na quinta");
        break;
    case 8:
        printf("Seu rodizio é na quinta");
        break;
    default:
        printf("Seu rodizio é na sexta");
        break;
    }
}