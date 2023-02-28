// função simetrico se o intervalo é simetrico devolve 1 se n 0

#include<stdio.h>

int simetrico(int v[], int l, int r){
    if(v[l] != v[r]){
        return 0;
    }
    simetrico(v,l+1,r -1);
    return 1;
}



void main(void){
    x = simetrico({1,2,3,3,2,1},0,6);
    printf("%d",x );
}


