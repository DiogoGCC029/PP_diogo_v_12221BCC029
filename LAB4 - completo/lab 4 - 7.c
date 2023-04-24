#include <stdio.h> //7
#include <stdlib.h>

float conversor (float C);

int main()
{
    float C, F;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &C);
    F=conversor(C);
    printf("%.3f gruas Celcius equiavalem a %.3f graus Fahrenheit\n", C, F);

    return 0;
}




float conversor (float C){
    return (C*(9.0/5.0)+32);
}
