#include <stdio.h>

int quociente (int a, int b){
    if (a < b) {
        return 0;
    } 
    return 1 + quociente(a - b, b);
}

int main(){
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    if (b == 0){
        printf("Divisão por zero.\n");
    } else {
        printf("O quociente é: %d\n", quociente(a, b));
    }

    return 0;
}