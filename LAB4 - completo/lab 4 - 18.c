#include <stdio.h> //18
#include <stdlib.h>

int expoencial (int N, int x);

int salva;

int main()
{
    int N, result, x;

    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Qual o expoente da potencia?\n");
    scanf("%d", &x);
    salva=N;
    
    result= expoencial (N, x);

    printf("O resultado eh: %d\n", result);
    return 0;
}




int expoencial (int N, int x){
    
    for(int i=0; i<x; i++){
        salva*=N;
    }
    return salva;

}
