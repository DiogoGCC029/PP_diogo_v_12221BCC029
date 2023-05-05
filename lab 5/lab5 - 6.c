#include <stdio.h>
#include <stdlib.h>  //6

int ehprimo (int N);


int main(){

    int vet[10], result[10];

    printf("Digite os numeros contidos no vetor:\n");

    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);

        if(ehprimo(vet[i])) result[i]=vet[i];
        else result[i]=0;
    }

    for(int i=0;i<10;i++){

        if(result[i]>0) printf("Vetor [%d] = %d eh um numero primo\n", i, result[i]);
    }

    return 0;

}


int ehprimo (int N){

    int salva;

    if (N==2||N==3||N==5||N==7) return 1;
    if (N%2==0 || N%3==0 || N%5==0 || N%7==0) return 0;

    salva=(int)(sqrt(N));

    for(int i=3; i<salva; i+=2){
        if(N%i==0)
        {
            return 0;
        }
    } return 1;
}