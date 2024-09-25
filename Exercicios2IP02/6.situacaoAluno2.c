#include<stdio.h>
#include<locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese_Brazil");

    float p1, p2, m;
    int faltas;
    printf("Quais as notas do aluno? ");
    scanf("%f %f", &p1,&p2);
    printf("Quantas faltas teve o aluno? ");
    scanf("%d", &faltas);
    m = (p1+p2)/2;
    if(m >= 6 && faltas <= 5) puts ("Aprovado!");
    else puts ("Reprovado!");
    printf("A media foi %1.1f\n", m);
    return 0;
}