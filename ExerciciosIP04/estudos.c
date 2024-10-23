#include <stdio.h>

float media (float a, float b){
    return (a + b) / 2;
}
float maior (float a, float b){
    return (a > b) ? a : b;
}
int main (void){
    float p1, p2, t1, t2;
    printf("Provas? ");
    scanf("%f %f", &p1, &p2);
    printf("Trabalhos? ");
    scanf("%f %f", &t1, &t2);
    printf("Média das notas: %.1f\n", media(maior(p1, p2), maior(t1,t2)));
    return 0;
}