#include <stdio.h>
#include <stdlib.h>     //m3

int main(){

    int A[4][4], maiorI=1, maiorJ=1;

    for(int i=0;i<4;i++){

        for(int j=0; j<4; j++){
                
            scanf("%d", &A[i][j]);

            if(A[i][j]>A[maiorI][maiorJ]){
                maiorI=i;
                maiorJ=j;
            }

        }
    }


    for(int i=0;i<4;i++){

        for(int j=0; j<4; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    


    printf("O maior numero esta em A[%d][%d]\n", maiorI+1, maiorJ+1);
}