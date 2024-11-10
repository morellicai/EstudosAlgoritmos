#include <stdio.h>


int lsearch(int x, int v[], int n, int i){
    if (i < n){
        if (x == v[i]){
            return 1;
        }
        return lsearch(x, v, n, i + 1);
    }
    return 0;
}
int main(){
    int v[8] = {66,80,31,48,27,19,52};
    printf("27: %d\n", lsearch(27,v,8,0));
    printf("51: %d\n", lsearch(51,v,8,0));
    return 0;
}