#include <stdio.h>

void fatorial(int num){
    int result = 1;
    for(int i = num; i > 0; i--){
        printf("%d", i);
            if(i > 0 + 1){
                printf(" * ");
            }
        result *= i;
    }
    printf("\nFatorial de %d = %d\n", num, result);
}

int main() {
    int numF;
    printf("Digite um número: \n");
    scanf("%d", &numF);

    fatorial(numF);
}