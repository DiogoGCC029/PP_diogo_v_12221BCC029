#include <stdio.h> //24
#include <stdlib.h>

int forma_triangulo (int N);
int salva;

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    salva=N;
    
    forma_triangulo(N);

    return 0;
}

int forma_triangulo (int N){
    
    for(int j=0; j<salva; j++){
            
        for(int i=N-1; i>0; i--){
            printf(" ");
        }
        N--;

        for(int i=(j*2)+1; i>0; i--){
            printf("*");
        }
        printf ("\n");
    }
}
