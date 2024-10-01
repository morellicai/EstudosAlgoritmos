#include<stdio.h>

int main(void) {
    int numF, result;
    printf("Digite um número: \n");
    scanf("%d", &numF);
    result = 1;
    for(int i = numF; i > 0; i--){
        printf("%d", i);
            if(i > 0 + 1){
                printf(" * ");
            }
        result *= i;
    }
    printf("\nFatorial de %d: %d\n", numF, result);
}