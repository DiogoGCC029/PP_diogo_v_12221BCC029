#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[5][5], repete=-1, J;

    for(int i=1;i<=5;i++){

        for(int j=1; j<=5; j++){
            A[i][j]=rand();
            A[i][j]=(A[i][j]%99)+1;

            J=j-1;

            for(int I=i; I; I--){
                while(J){
                            
                    while (A[i][j]==A[I][J]){
    
                    A[i][j]=rand();
                    A[i][j]=(A[i][j]%99)+1;

                    }
                    J--;

                }
                J=j;

            }



        }
    }

    for(int i=1;i<=5;i++){

        for(int j=1; j<=5; j++){
                
        }
    }
    for(int i=1;i<=5;i++){

        for(int j=1; j<=5; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    

}