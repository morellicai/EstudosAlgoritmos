#include<stdio.h>

int main(void){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    int result = 0;
    for(int i = 1; i <= num; i++){
        printf("%d", i);
            if(i < num){
                printf(" + ");
            }
        result = result + i;
    }
    printf(" = %d\n", result);
}