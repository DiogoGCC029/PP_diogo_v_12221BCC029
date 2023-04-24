#include <stdio.h> //19
#include <stdlib.h>

int fat (int N, int result);

int main()
{
    int N, result=1;

    printf("Digite um numero: ");
    scanf("%d", &N);
    
    result=fat(N, result);

    printf("O fatorial eh %d\n", result);

    return 0;
}




int fat (int N, int result){
    
    if(N){
        result=result*N;
        N--;
        return fat(N, result);
    } else return result;
}