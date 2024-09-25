#include <stdio.h>

int main(void) {
    int dia, mes, ano;
    int passo1, passo2, passo3;

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    passo1 = (dia * 100) + mes + ano;

    int parte1 = passo1 / 100; 
    int parte2 = passo1 % 100;  
    passo2 = parte1 + parte2;

    passo3 = passo2 % 5;
    printf("Resultado é: %d\n", passo3);

    switch (passo3) {
        case 0:
            printf("Perfil: Tímido\n");
            break;
        case 1:
            printf("Perfil: Sonhador\n");
            break;
        case 2:
            printf("Perfil: Paquerador\n");
            break;
        case 3:
            printf("Perfil: Atraente\n");
            break;
        case 4:
            printf("Perfil: Irresistível\n");
            break;
        default:
            printf("Perfil desconhecido.\n");
            break;
    }

    return 0;
}