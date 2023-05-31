
#include <stdio.h> //8
#include <stdlib.h>


int main()
{
    int A, *B, **C, ***D;
    B=&A;
    C=&B;
    D=&C;

    printf("Digite um numero: ");
    scanf("%d", B);

    printf("Dobro: %d\n", (*B)*2);
    printf("Triplo: %d\n", (**C)*3);
    printf("Quadruplo: %d\n", (***D)*4);


    return 0;
}