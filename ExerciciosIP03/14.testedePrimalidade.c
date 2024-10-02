#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d não é um número primo.\n", n);
        return 0;
    }

    int limite = (int)ceil(sqrt(n));
    int primo = 1;

    for (int i = 2; i <= limite; i++)
    {
        if (n % i == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo)
    {
        printf("%d é um número primo!\n", n);
    }
    else
    {
        printf("%d não é um número primo!\n", n);
    }

    return 0;
}