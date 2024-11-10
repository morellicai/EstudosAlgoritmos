#include <stdio.h>

void cat(char s[], char t[]) {
    while (*s != '\0') {
        s++;
    }
    
    while (*t != '\0') {
        *s = *t; 
        s++;
        t++;
    }   
    *s = '\0';
}

int main(void) {
    char v[10] = "Aba";
    char w[10] = "cate";
    cat(v, w);
    puts(v);
    return 0;
}