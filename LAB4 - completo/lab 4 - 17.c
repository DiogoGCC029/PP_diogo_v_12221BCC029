#include <stdio.h> //17
#include <stdlib.h>

int funcao (float M, float N);

int main()
{
    float M, N;
    int result;

    printf("Digite dois numeros: ");
    scanf("%f %f", &M, &N);

    if(M<=0 || N<=0) printf("Erro\n");
    else{
        
        result=funcao(M, N);

        printf("A soma de todos os numeros inteiros entre %.2f e %.2f eh %d: ", M, N, result);
    }

    return 0;
}




int funcao (float M, float N){
    
    int result=0, save;
    int A, B, i=(int)(N);

    if(N>M){
        save=M;
        M=N;
        N=save;
    }
    
    if(M>((int)(M)))result=(int)(M);
    
    A=(int)(M);
    B=(int)(N);
    
    while(i<A){
        result+=i;
        i++;
    }

}
