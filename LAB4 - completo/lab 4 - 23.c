#include <stdio.h> //23
#include <stdlib.h>

int forma_triangulo (int N);
int salva;

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    salva=N-1;
    N=N*2-1;
    
    forma_triangulo(N);

    return 0;
}

int forma_triangulo (int N){

    for (int i=0;i<salva;i++){

        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=salva+1;i;i--){
    
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
