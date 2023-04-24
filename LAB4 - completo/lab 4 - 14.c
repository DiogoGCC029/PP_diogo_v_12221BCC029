#include <stdio.h> //14
#include <stdlib.h>

float teste (float Km, float L);

int main()
{
    float Km, L;
    int marca;

    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &Km);
    printf("Digite o respectivo consumo de gasolina, em L: ");
    scanf("%f", &L);

    marca=teste(Km, L);

    switch (marca){
        
        case 1:
        printf("Super economico!\n"); break;
        case -1:
        printf("Venda o carro!\n"); break;
        case 0:
        printf("Economico!\n"); break;
    }

    return 0;
}



float teste (float Km, float L){

    if(Km/L<8) return -1;
    if(Km/L>14) return 1;
    return 0;
    
}
