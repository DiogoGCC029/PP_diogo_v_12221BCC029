#include <stdio.h> //16
#include <stdlib.h>

int linha (int N);
int linhas (int N);

int salva;

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    salva=N;
    
    linhas(N);

    return 0;
}



int linhas (int N){
    
    if(N){
        N--;
        linha(salva-N);
        printf("\n");
        linhas(N);
    } else return 0;

}


int linha (int N){

    if(N){
        printf("!");
        N--;
        linha(N);
    } else return 0;

}