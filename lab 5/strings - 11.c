#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char S[100];
    int A, B;

    printf("Digite a string: ");
    scanf("%s", &S);

    printf("\nDigite os pontos de inicio e parada: ");
    scanf("%d %d", &A, &B);

    printf("\n");

    for(int i=A; i<=B; i++){
        printf("%c", S[i]);
    }
    printf("\n");

    return 0;

}
