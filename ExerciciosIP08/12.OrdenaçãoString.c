#include <stdio.h>
#include <string.h>
void exibe(char v[][8], int n){
    for(int i = 0; i < n; i++){
        printf("%s\n", v[i]);
    }
}
void bsort(char v[][8], int n){
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j< n-i; j++){
            if(strcmp(v[j], v[j+1]) > 0){
                char aux[8];
                strcpy(aux, v[j]);
                strcpy(v[j], v[j+1]);
                strcpy(v[j+1], aux);
            }
        }
    }
}
int main(){
    char v[][8] = {
        "Eduardo",
        "Catia",
        "Ana",
        "Denise",
        "Beatriz"
    };
    bsort(v,5);
    printf("Vetor ordenado:\n");
    exibe(v,5);
}