#include <stdio.h> //12
#include <stdlib.h>

int decompoe (int n);

int main()
{
    int n;
    int soma=0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if(n<=0) printf("Numero invalido\n");
    else{

        soma=decompoe(n);

        printf("A soma de todos os algarismos de %d eh %d\n", n, soma);
    }
      
    return 0;
}




int decompoe (int n){

    int marca_casas=0, soma=0, i=1;

    while(n>n%((int)(pow(10, marca_casas)))){
        marca_casas++;
    }
    
    while(i<=marca_casas){
        soma+=n-10*(n/10);
        n=n/10;
        i++;
    }
    return soma;
}
