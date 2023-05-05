#include <stdio.h>
#include <stdlib.h> //2

int main(){

    int vet[8], X, Y;

    printf("Digite os numeros contidos no vetor:\n");

    for(int i=0;i<9;i++){

        printf("Vetor[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nDigite agora as posicoes do vetor que deseja somar:\n");
    scanf("%d %d", &X, &Y);

    printf("\nA soma vale %d\n", vet[X]+vet[Y]);

    return 0;

}