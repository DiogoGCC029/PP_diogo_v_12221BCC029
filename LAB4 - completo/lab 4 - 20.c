#include <stdio.h> //16
#include <stdlib.h>
#include <math.h>

int ehprimo (int N);
int func (int N);

int salva;

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    salva=N;
    printf("Segue uma lista dos numeos primos menores que %d\n\n", N);
    
    func(N);

    return 0;
}

int func (int N){

    for(int i=3; i<N; i+=2){
        if (ehprimo(i)) printf ("%d\n", i);
    } return 0;

}

int ehprimo (int N){

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