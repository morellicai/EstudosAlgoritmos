#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char a;
    printf("Digite um caractere para ver o seu correspondente na tabela ASCII: \n");

    a=getchar();

    printf("O correspondente na tabela ASCII é: %d",a);
    return 0;
}