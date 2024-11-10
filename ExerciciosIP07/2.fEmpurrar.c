#include <stdio.h>

void troca (int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
void empurra(int v[], int n){
    for(int i = 0; i < n - 1;  i++){
        if(v[i] > v[i + 1]){
            troca(v, i, i + 1);
        }
    }
}
void exibe(int v[], int n){
    for(int i=0; i < n; i++){
        printf("%d ", v[i]);
    }
}
int main(){
    int v[5] = {48, 19, 31, 52, 27};
    empurra(v, 5);
    exibe (v,5);
    // Saida esperada {19, 31, 48, 27, 52}
}