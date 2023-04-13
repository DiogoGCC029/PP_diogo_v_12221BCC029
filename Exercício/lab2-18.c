
#include <stdio.h>    //9
#include <stdlib.h>

int main()
{
    int N, i=0, I=1;

    printf ("Digite um numero: ");
    scanf("%d", &N);
    printf ("Os %d primeiros numeros impares sao:\n\n", N);


    while(i<N){
        printf ("%d   ", I);
        I=I+2;
        i++;
    }

    return 0;

}