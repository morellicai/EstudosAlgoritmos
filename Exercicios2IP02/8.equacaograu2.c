#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "Portuguese_Brazil");

	float a, b, c, delta, raiz1, raiz2;

	printf("Digite os coeficientes da sua equação de 2 Grau: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a == 0) {
		printf("O valor de A deve ser diferente de 0!");
		return 1;
	}
	
	delta = pow(b, 2) - (4 * a * c);
	printf("Este é o delta: %.2f", delta);
	if(delta > 0) {
		raiz1 = ((-b + sqrt(delta)) / (2 * a));
		raiz2 = ((-b - sqrt(delta)) / (2 * a));
		printf("\nAs raízes são: %.1f %.1f", raiz1, raiz2);
	} else if(delta == 0) {
		raiz1 = -b / (2 * a);
		printf("\nA raíz da equação: %.1f", raiz1);
	} else {
		printf("\nNão há raízes reais!");
	}
}