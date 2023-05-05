#include <stdio.h>
#include <stdlib.h>

int main(){

    char A[5][5];

    for(int i=1;i<=5;i++){

        for(int j=1; j<=5; j++){
                
            if(i==j) A[i][j]='1';
            else A[i][j]='0';
        }
    }
    for(int i=1;i<=5;i++){

        for(int j=1; j<=5; j++){
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }
    

}