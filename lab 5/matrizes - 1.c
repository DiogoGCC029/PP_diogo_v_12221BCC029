#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[4][4], result=0;

    for(int i=1;i<=4;i++){

        for(int j=1; j<=4; j++){
                
            scanf("%d", &A[i][j]);
            if(A[i][j]>10) result++;
        }
    }
    printf("Existem %d numeros maiores que 10\n", result);
}