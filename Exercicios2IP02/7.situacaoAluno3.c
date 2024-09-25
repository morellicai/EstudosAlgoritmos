#include<stdio.h>
#include <locale.h>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"

int main(void){

    setlocale(LC_ALL, "Portuguese_Brazil");

    float p1, p2, m;
    int faltas;
    printf("Quais as notas? ");
    scanf("%f %f", &p1,&p2);
    printf("Quantas faltas teve o aluno? ");
    scanf("%d", &faltas);
    m = (p1+p2)/2;
    if (faltas > 5) puts (RED "Reprovado!");
    else if (m >= 6) puts (BLUE "Aprovado!"); 
    else puts (YELLOW "Recuperação!");
    return 0;
}