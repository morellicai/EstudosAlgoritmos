#include <stdio.h>

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
void bsortIn(int v[], int n,int i, int j){
    if (j >= n - i){
        return;
    }
    if(j < n - i){
        if(v[j] > v[j + 1]){
            troca(v, j, j + 1);
        }
        bsortIn(v, n, i, j+1);
    } else {
        bsortIn(v, n, i, 0);
    }
}
void bsort(int v[], int n, int i) {
    if (i >= n -1){
        return;
    }
    if(i <= n - 1){
        bsortIn(v, n, i, 0);
    }
    bsort(v, n, i+1);
}
void exibe (int v[], int n){
    printf("Vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}
int main (){
    int v[5] = {48, 13, 31, 52, 27};
    bsort(v, 5, 1);
    exibe(v, 5);
    return 0;
}