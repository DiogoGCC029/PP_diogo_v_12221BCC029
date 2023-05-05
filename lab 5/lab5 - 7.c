#include <stdio.h>//7
#include <stdlib.h>

int ehprimo (int N);


int main(){

    int vet[6], pares[6], impares[6], somaPAR=0, somaIMPAR=0;

    printf("Digite os numeros contidos no vetor:\n");

    for(int i=1;i<=6;i++){
        scanf("%d", &vet[i]);

        if(vet[i]%2==1){
            pares[i]=0;
            impares[i]=vet[i];
        }
        else{
            pares[i]=vet[i];
            impares[i]=0;
        }
    }

    printf("\nSegue abaixo os numeors pares digitados:\n");
    for(int i=1;i<=6;i++){
        if(pares[i]!=0){
            printf("Vetor [%d] = %d\n", i, pares[i]);
            somaPAR+=pares[i];
        }
    }
    printf("A soma de todos os pares eh %d\n", somaPAR);

    printf("\nSegue abaixo os numeors impares digitados:\n");
    for(int i=1;i<=6;i++){
        if(impares[i]!=0){
            printf("Vetor [%d] = %d\n", i, impares[i]);
            somaIMPAR+=impares[i];
        }
    }
    printf("A soma de todos os impares eh %d\n", somaIMPAR);


    return 0;

}
