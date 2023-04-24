
#include <stdio.h> //4
#include <stdlib.h>
#include <math.h>

int squad (int N);

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    squad(N);

    return 0;
}


int squad (int N){

    if(sqrt(N)==((int)(sqrt(N))))
        printf("%d eh um quadrado perfeito!\n", N);
    else
        printf("%d nao eh um quadrado perfeito!\n", N);


}


