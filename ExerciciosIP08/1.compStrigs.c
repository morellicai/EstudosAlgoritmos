#include <stdio.h>
#include <string.h>
int main(){
    char s[513];
    char senha[12] = "Abracadabra";
    printf("Senha? ");
    gets(s);
    if (strcmp(s, senha) == 0){
        puts("Senha correta!");
    } else {
        puts("Senha incorreta!");
    }
    return 0;
}