

#include <stdio.h> //3
#include <stdlib.h>

int posi (int N);

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    N=posi(N);

    printf("A funcao retornou %d, e N", N);
    if(N==1) printf(" eh positivo\n");
    if(N==-1) printf("eh negativo\n");
    if(N==0) printf(" vale 0\n");

    return 0;
}


int posi (int N){

    if(N>0) return 1;
    if(N==0) return 0;
    if(N<0) return -1;

}