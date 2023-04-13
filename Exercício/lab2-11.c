
#include <stdio.h>    //11
#include <stdlib.h>

int main()
{
    int N, i=0, soma=0;

    printf ("Digite um numero: ");
    scanf("%d", &N);

    while(i<N){
		soma=soma+i;
        i++;
    }
	printf ("A soma de todos os numeros naturais menores que %d eh %d", N, soma+N);

    return 0;

}