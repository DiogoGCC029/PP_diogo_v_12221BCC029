#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char S1[100], S2[100];
    int N;

    printf("Digite a string S1: ");
    scanf("%s", &S1);
    printf("Digite a string S2: ");
    scanf("%s", &S2);

    printf("\nDigite o N: ");
    scanf("%d", &N);

    S2[N]='\0';

    printf("\nA concatenacao de S1 com S2 eh %s\n", strcat(S1, S2));
            
    return 0;

}
