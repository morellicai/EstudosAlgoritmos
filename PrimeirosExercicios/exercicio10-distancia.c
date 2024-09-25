#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese-Brazil");

    float xp, yp, xq, yq, pitagoras;

    printf("Qual as coordenadas deseja saber a distancia? \n");
    scanf("%f %f %f %f", &xp, &yp, &xq, &yq);

    pitagoras = (xp - xq)*(xp - xq) + (yp - yq)*(yp - yq);
    pitagoras = sqrt(pitagoras);

    printf("A distancia entre os pontos P e Q é = %f", pitagoras);

    return 0;
}