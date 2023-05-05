#include <stdio.h>
#include <stdlib.h>     //str1
#include <string.h>

int main(){

    char S1[100], resultado[100];
    int tamanho=0;      //b
    char S2[100];     //c
    char contadorCARACTER=0;   //f
    char C1, C2;    //g
    int p0, S_ou_N; //i

    printf("A) Digite a string S1: ");
    scanf("%s", &S1);
            /*A*/

    tamanho=strlen(S1);
    printf("\nB) O tamanho de S1 eh %d\n", tamanho);
            /*B*/

    printf("\nDigite agor a string S2: ");
    scanf("%s", &S2);

    S_ou_N=1;
    for(int i=0; S1[i]!='\0'; i++){
        if(S1[i]!=S2[i]) S_ou_N=0;
    }

    if(S_ou_N) printf("C) S1 e S2 sao equivalentes\n");
    else printf("C) S1 e S2 nao sao equivalentes\n");
        /*C*/

    
    for(int i=0; S1[i]!='\0'; i++){
        resultado[i]=S1[i];
    }
    resultado[tamanho]='\0';

    printf("D) Ademais, a concatenacao de S1 com S2 eh %s\n", strcat(resultado, S2));
            /*D*/


    printf("\nE) S1, quando escrito ao contrario eh ");
    for(int i=tamanho; i>=0; i--){
        printf("%c", S1[i]);
    }                                   /*E*/
    printf ("\n");

    printf("\nAgora digite um caracter a ser buscado em S1: ");
    scanf(" %c", &C1);

    for(int i=0; S1[i]!='\0'; i++){
        if(S1[i]==C1) contadorCARACTER++;
    }
    printf("F) %c aparace em S1 %d vez\n", C1, contadorCARACTER);
            /*F*/

    printf("\nAgora digite um caracter a ser substituido em S1: ");
    scanf(" %c", &C1);
    printf("Digite o novo caracter a ser inserido: ");
    scanf(" %c", &C2);

    for(int i=0; S1[i]!='\0'; i++){
        if(S1[i]==C1) resultado[i]=C2;
        else resultado[i]=S1[i];
    }
    resultado[tamanho]='\0';
    printf("G) A string resultante eh: %s\n", resultado);
            /*G*/

    S_ou_N=1;
    printf("\nAgora, descobriremos se S2 eh substring de S1. Para isso, informe S2: ");
    scanf("%s", &S2);

    for(int i=0; S1[i]!='\0'; i++){

        if(S1[i]==S2[0]){
            for(int j=0; S2[j]!='\0'; j++){
                if(S1[i+j]!=S2[j]){
                    S_ou_N=0;
                    break;
                }
                else S_ou_N=1;
            }
        }

        if(S_ou_N){
            printf("H) S2 eh substring de S1\n");
            break;
        }                   /*H*/

    }
    if(S_ou_N==0) printf("H) S2 nao eh substring de S1\n");



    printf("Agora sera retirada uma substring de S1. Para isso, informe de que posicao de S1 deve-se comecar: ");
    scanf("%d", &p0);
    printf("Digite o tamanho da nova substring: ");
    scanf("%d", &tamanho);

    printf("I) A nova string resultate eh a seguinte: ");
    for(int i=p0; S1[i]!='\0' || i<=tamanho; i++){
        printf("%c", S1[i]);
    }
    printf("\n");  /*I*/

    return 0;

}
