#include <stdio.h>
#include <ctype.h>

void upr(char s[]){
    for(int i = 0; s[i] != '\0'; i++){
        s[i] = toupper(s[i]);
    }
}
int main(){
    char v[10] = "Teste";
    upr(v);
    puts(v);
    return 0;
}