#include <stdio.h> //1
#include <stdlib.h>

int dobro (int N);

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    N=dobro(N);
    printf("O dobro de %d eh %d\n", N/2, N);

    return 0;
}




int dobro (int N){

    N=N*2;
    return (N);
}
