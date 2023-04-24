#include <stdio.h> //11
#include <stdlib.h>

float funcao (float n1, float n2, float n3, char opcao);

int main()
{
    float n1, n2, n3, result;
    char opcao;

    printf("Digite as notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);


    printf("Escolha [A] para a media aritmetica ou [P] para media ponderada: ");
    opcao=getchar();
    opcao=getchar();
        
    if(opcao=='A'||opcao=='a'||opcao=='p'||opcao=='P'){

        result=funcao(n1, n2, n3, opcao);
        printf("A media eh %.2f\n", result);
    }else printf("Erro\n");

    return 0;
}




float funcao (float n1, float n2, float n3, char opcao){
    
    if(opcao=='A'||opcao=='a')return (n1+n2+n3)/3;
    return (5*n1+3*n2+2*n3)/10;
}
