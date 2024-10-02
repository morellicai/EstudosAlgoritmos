#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    double num;

    while (1)
    {
        printf("Digite um número real não negativo: ");
        scanf("%lf", &num);

        if (num >= 0)
        {
            break;
        }
        else
        {
            printf("Entrada inválida. Por favor, digite um número real não negativo.\n");
        }
    }

    double raiz = sqrt(num);
    printf("A raiz quadrada de %.2f é %.2f\n", num, raiz);

    return 0;
}