#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");

	int NumeroBase10;
	char hexadecimal[10];
	
	printf("Digite um número em base 10 para a conversão em base 16: ");
	scanf("%d", &NumeroBase10);
	
	sprintf(hexadecimal, "%X", NumeroBase10);
	
	printf("O número em Hexadecimal ? %s \n", hexadecimal);
	
	return 0;	
}