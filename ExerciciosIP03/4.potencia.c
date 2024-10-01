#include<stdio.h>

int main(void) {
    int numX, numN;
    printf("Digite um número: \n");
    scanf("%d", &numX);
    printf("Digite a Potencia: \n");
    scanf("%d", &numN);
    int result = 1;
    if(numN == 0){
        result = 1;
    }else{
        for (int i = 0; i < numN; i++) {
            result *= numX;
        }
    }
    printf("%d elevado a %d é %d\n", numX, numN, result);
    return 0;
}