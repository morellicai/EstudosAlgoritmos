#include <stdio.h>


void exibe(char v[][8], int n){
    for(int i = 0; i < n; i++){
        printf("%s\n", v[i]);
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
    exibe(v,5);
}