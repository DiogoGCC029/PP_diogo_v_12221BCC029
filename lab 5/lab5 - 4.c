#include <stdio.h>
#include <stdlib.h> //4

int main(){

    int vet[5], X, Y;

    printf("Digite os numeros contidos no vetor:\n");

    for(int i=0;i<6;i++){

        scanf("%d", &vet[i]);
    }

    for(int i=5;i>=0;i--){
        printf("%d\n", vet[i]);
    }
    return 0;

}