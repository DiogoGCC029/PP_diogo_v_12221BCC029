
#include <stdio.h>    //10
#include <stdlib.h>

int main()
{
    int N=0, i=0;
    printf("A soma dos 50 primeiros numeros pares eh:");


    while(i<100){
        i=i+2;
        N=N+i;
    }
    printf("%d\n", N);

    return 0;

}