#include <stdio.h>
#include <stdlib.h>     //m3

int main(){

    float A[5][5], busca, sucesso=0;

    for(int i=0;i<5;i++){

        for(int j=0; j<5; j++){
                
            scanf("%f", &A[i][j]);

        }
    }

    printf("Qual numero voce quer pesquisar?\n");
    scanf("%f", &busca);

    for(int i=0;i<5;i++){

        for(int j=0; j<5; j++){
            if(A[i][j]==busca){
                printf("Numeno encontrado em A[%d][%d]", i+1, j+1);
                sucesso=1;
            }

        }

    }
    if(sucesso==0) printf("Nao encontrado\n");

    return 0;


}