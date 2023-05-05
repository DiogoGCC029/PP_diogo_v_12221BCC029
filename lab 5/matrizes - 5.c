#include <stdio.h>
#include <stdlib.h>

int main(){

    char A[10][10];

    for(int i=0;i<10;i++){

        for(int j=0; j<10; j++){
                
            if(i<j) A[i][j]=2*i+7*j-2;
            if(i==j) A[i][j]=3*i*i-1;
            if(i>j) A[i][j]=4*i*i*i-5*j*j+1;
        }
    }
    for(int i=0;i<10;i++){

        for(int j=0; j<10; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    

}