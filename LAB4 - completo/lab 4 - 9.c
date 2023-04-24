#include <stdio.h> //9
#include <stdlib.h>

float cilindro (float r, float h);

int main()
{
    float r, h, V;

    printf("Digite o raio da base do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    V=cilindro(r, h);
    printf("O volume do cilindro vale %.3f\n", V);

    return 0;
}




float cilindro (float r, float h){
    
    return h*3.141592*r*r;
}
