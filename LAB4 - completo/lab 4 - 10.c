

#include <stdio.h> //10
#include <stdlib.h>

int maior (int A, int B);

int main()
{
    int A, B;

    printf("Digite dois numeros: ");
    scanf("%d %d", &A, &B);

    A=maior(A,B);

    printf("O maior eh %d", A);

    return 0;
}


int maior (int A, int B){

    if(B>A)return B;
    return A;
}