
#include <stdio.h>    //9
#include <stdlib.h>

int main()
{
    int N, i=2, marca, S;

    printf ("Digite um numero: ");
    scanf("%d", &N);

    marca=N/2;

    while(i<=marca){
        
        if(N%i==0)S=S+i;
        i++;
    }

     printf ("A soma dos divisores de %d eh %d\n", N, S);

    return 0;

}