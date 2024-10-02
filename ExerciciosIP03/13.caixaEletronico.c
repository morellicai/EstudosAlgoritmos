#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int opcao;
    double saldo = 1000.00;

    do
    {
        printf("\n=== Caixa Eletrônico ===\n");
        printf("1 - Depósito\n");
        printf("2 - Saque\n");
        printf("3 - Saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            double valor;
            printf("Digite o valor do depósito: R$ ");
            scanf("%lf", &valor);
            if (valor > 0)
            {
                saldo += valor;
                printf("Depósito realizado com sucesso!\n");
            }
            else
            {
                printf("Valor inválido para depósito.\n");
            }
            break;
        }
        case 2:
        {
            double valor;
            printf("Digite o valor do saque: R$ ");
            scanf("%lf", &valor);
            if (valor > 0 && valor <= saldo)
            {
                saldo -= valor;
                printf("Saque realizado com sucesso!\n");
            }
            else if (valor > saldo)
            {
                printf("Saldo insuficiente para realizar o saque.\n");
            }
            else
            {
                printf("Valor inválido para saque.\n");
            }
            break;
        }
        case 3:
            printf("Seu saldo atual é: R$ %.2f\n", saldo);
            break;
        case 4:
            printf("Saindo do caixa eletrônico. Obrigado!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}