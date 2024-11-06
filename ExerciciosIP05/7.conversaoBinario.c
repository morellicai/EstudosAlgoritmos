#include <stdio.h>

void binario(int n) {
    if (n > 0) {
        binario(n / 2);
        printf("%d", n % 2);
    }
}

int main(void) {
    int n;
    printf("Num? ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    } else {
        binario(n);
    }
    printf("\n");
    return 0;
}