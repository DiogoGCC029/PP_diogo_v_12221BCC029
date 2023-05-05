#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[4][4];

    for(int i=1;i<=4;i++){

        for(int j=1; j<=4; j++){
            A[i][j]=rand();
            A[i][j]=(A[i][j]%20)+1;

        }
    }

    for(int i=1;i<=4;i++){

        for(int j=1; j<=4; j++){
                
            if(j>i) A[i][j]=0;
        }
    }
    for(int i=1;i<=4;i++){

        for(int j=1; j<=4; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    

}