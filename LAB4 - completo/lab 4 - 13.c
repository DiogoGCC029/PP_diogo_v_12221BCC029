#include <stdio.h> //13
#include <stdlib.h>

float calc (float n1, float n2, char opcao);

int main()
{
    float n1, n2, result;
    char opcao;

    printf("Digite a conta:\n");
    scanf("%f", &n1);
    scanf(" %c", &opcao);
    scanf("%f", &n2);



    result=calc(n1, n2, opcao);
        
    printf("O resultado eh: %.3f\n", result);
    
    return 0;
}




float calc (float n1, float n2, char opcao){
    
    switch (opcao){

        case '+': return (n1+n2);
        case '-': return (n1-n2);
        case '*': return (n1*n2);
        case '/': return (n1/n2);
    
    }
}
