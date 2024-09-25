#include<stdio.h>
#include<math.h>

int main(){
    float media, n1, n2;

    printf("Declare as Notas do Aluno\n\n");
    scanf("%f %f", &n1, &n2);
    media = (n1 + n2) / 2.0;
    printf("A media do aluno e: %0.1f", media);
    return 0;
}