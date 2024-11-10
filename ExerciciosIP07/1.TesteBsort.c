#include <stdio.h>

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
void bsort (int v[], int n){
    for(int i = 1; i <= n - 1; i++){
        for(int j = 0; j < n - i; j++){
            if(v[j] < v[j + 1]){
                troca(v, j, j + 1);
            }
        }
    }
}
void exibe (int v[], int n){
    printf("Vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}
int main (){
    int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};
    bsort(v, 10);
    exibe(v, 10);
    return 0;
}