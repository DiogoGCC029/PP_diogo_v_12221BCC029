#include <stdio.h>
#include <stdlib.h>  //8

int main(){

    float vet[10], repetiu=0;

    printf("Digite os numeros contidos no vetor:\n");

    for(int i=1;i<=10;i++){
        while(1){
            repetiu=0;
            scanf("%f", &vet[i]);
            
            for(int j=1; j<i; j++){
                if(vet[j]==vet[i]){
                    printf("Numero repetido, por favor digite outro\n");
                    repetiu++;
                    break;
                }
            }
            if(repetiu==0) break;

        }

    }
    printf("\nSegue abaixo os numeros contidos no vetor:\n");

    
    for(int i=1;i<=10;i++){

        printf("%.3f\n", vet[i]);

    }
    return 0;

}