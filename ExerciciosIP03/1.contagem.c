#include<stdio.h>

int main (void){
    int n;
    printf("A partir de qual numero começamos o decremento? ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        printf("%d\n", i);
    }
    return 0;
}