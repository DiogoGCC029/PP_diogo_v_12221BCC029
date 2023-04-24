#include <stdio.h> //16
#include <stdlib.h>

int desenha_linha (int N);

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    
    desenha_linha(N);

    return 0;
}




int desenha_linha (int N){
    
    if(N){
        printf("=");
        N--;
        desenha_linha(N);
    } else return 0;

}
