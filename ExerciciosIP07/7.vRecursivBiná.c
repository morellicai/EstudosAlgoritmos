#include <stdio.h>

int bsearch(int x, int v[], int n, int i, int u){
    if (i > u){
        return 0;
    }
    int m = (i + u) / 2;
    if(x == v[m]){
        return 1;
    } 
    if(x < v[m]){
        return bsearch(x, v, n, i, m-1);
    } else {
        return bsearch(x, v, n, m + 1, u);
    }
}

int main(){
    int v[8] = {19,27,31,48,52,66,75,80};
    printf("27: %d\n", bsearch(27,v,8,0,7));
    printf("51: %d\n", bsearch(51,v,8,0,7));
    return 0;
}