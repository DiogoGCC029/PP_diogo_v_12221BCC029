#include <stdio.h> //8
#include <stdlib.h>
#include <math.h>

float pit (float A, float B);

int main()
{
    float A, B, C;

    printf("Digite o comprimento dos catetos: ");
    scanf("%f %f", &A, &B);
    C=pit(A, B);
    printf("A hipotenisa mede %.3f\n", C);

    return 0;
}




float pit (float A, float B){
    
    return sqrt(A*A+B*B);
}
