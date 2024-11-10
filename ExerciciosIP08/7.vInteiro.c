#include <stdio.h>


int val(char s[]){
    int res = 0;
    int i = 0;
    while(s[i] != '\0'){
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return res;
}
int main(){
    char v[] = "351";
    printf("Valor: %d\n", 2 * val(v));
    return 0;
}