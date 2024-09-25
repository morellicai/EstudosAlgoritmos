#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "Portuguese_Brazil");

    float salario, impRenda;

	printf("Qual o valor do seu salario? ");
	scanf("%f", &salario);

	if(salario >= 1903.98 && salario <= 2826.65){
		impRenda = salario * 0.075;
		printf("A declarar voce tem: %.2f", impRenda);
	} else if(salario >= 2826.66 && salario <= 3751.05){
		impRenda = salario * 0.15;
		printf("A declarar voce tem: %.2f", impRenda);
	} else if(salario >= 3751.06 && salario <= 4664.68){
		impRenda = salario * 0.22;
		printf("A declarar voce tem: %.2f", impRenda);
	} else if(salario >= 4664.69) {
		impRenda = salario * 0.275;
		printf("A declarar voce tem: %.2f", impRenda);
	} else{
		printf("isento \n");
		impRenda = 0;
	}
	return 0;
}