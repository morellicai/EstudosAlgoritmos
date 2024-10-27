#include <stdio.h>

int main(void);
int valida(int d, int m, int a);
int ultimo_dia(int m, int a);
void exibe_ds(int d, int m, int a);
int bissexto(int a);

int main(void){
    int dia = 0, mes = 0, ano = 0;

    printf("Digite a data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if(valida(dia, mes, ano)){
        printf("Data valida.\n");
        exibe_ds(dia, mes, ano);
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}

int valida(int d, int m, int a){
    if(d >= 1 && d < 32 && m >= 1 && m <= 12 && a >= 1){
        return 1;
    } else {
        return 0;
    }
}

int ultimo_dia(int m, int a){
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2: 
            if(bissexto(a)){
                return 29;
            } else{
                return 28;
            }
            break;
        default: 
            return -1;
    }
}
int bissexto(int a){
    return (a % 4 == 0 && a % 100!= 0) || a % 400 == 0;
}

void exibe_ds(int d, int m, int a){
    d++;
    if(d > ultimo_dia(m, a)){
        d = 1;
        m++;

        if (m > 12){
            m = 1;
            a++;
        }
    }
    printf("O dia seguinte é %02d/%02d/%04d.\n", d, m, a);
}