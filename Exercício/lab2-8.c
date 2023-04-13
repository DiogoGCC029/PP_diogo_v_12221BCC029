
#include <stdio.h>    //8
#include <stdlib.h>

int main()
{
    int i=0;

    float A, M, m;

    printf ("Digite um numero: ");
    scanf("%f", &A);

    M=A;
    m=A;

    while(i<9){
        printf ("Digite um numero: ");
        scanf("%f", &A);
        if(A>M)M=A;
        if(A<m)m=A;
        i++;
    }

    printf("O maior eh %.2f e o menor eh %.2f\n", M, m);

    return 0;

}

