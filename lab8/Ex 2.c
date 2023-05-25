#include <stdio.h>
#include <stdlib.h>

int main(){

    int I;
    float R;
    char c;

    int* Iend;
    float* Rend;
    char* cend;

    Iend = &I;
    Rend = &R;
    cend = &c;

    printf("Digite o valor inteiro: ");
    scanf("%d", Iend);
    printf("Digite o valor real: ");
    scanf("%f", Rend);
    setbuf(stdin, NULL);
    printf("Digite o caracter: ");
    scanf("%c", cend);

    printf("\nNumero inteiro: %d", I);
    printf("\nNumero real: %f", R);
    printf("\nCaracter: %c", c);

    return 0;
}