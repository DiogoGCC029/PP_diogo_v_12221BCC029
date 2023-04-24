

#include <stdio.h> //5
#include <stdlib.h>

float sphr (float raio);

int main()
{
    float V, raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    V=sphr(raio);

    printf("O volume da esfera de raio %.3f eh %.3f\n", raio, V);
    return 0;
}


float sphr (float raio){

    return((raioraioraio3.141594)/3);

}