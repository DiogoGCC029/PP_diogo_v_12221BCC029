#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[5][100];
    float consumo[5];
    int economico=0;
    
    for(int i=0; i<5; i++){
        printf("carro %d: ", i+1);
        scanf("%s", &str[i]);
        printf("onsumo medio do %s (em Km/L): ", str[i]);
        scanf("%f", &consumo[i]);
        printf("\n");

        if(consumo[i]<consumo[economico]) economico=i;
    }

    printf("\nDisso consluimos que o carro mais economico eh o %s, com um consumo medio de %.2f L/Km\n", str[economico], consumo[economico]);

    printf("\nAgora, segue uma lista do consumo de cada modelo de carro ao viajar 1000 Km:\n\n");
    for(int i=0; i<5; i++){
        printf("%s: %.2f litros\n", str[i], consumo[i]*1000);
    }
    return 0;

}
