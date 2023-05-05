#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char prod[100];
    float valor, valor_a_vista;

    printf("Produto: ");
    scanf("%s", &prod);
    printf("Preco: ");
    scanf("%f", &valor);

    valor_a_vista = valor*0.9;

    printf("%s:\n\n:", prod);
    printf("Preco: R$%.2f\n:", valor);
    printf("Desconto: R$%.2f\n", valor-valor_a_vista);
    printf("Valor a ser pago: R$%.2f\n", valor_a_vista);
    return 0;

}
