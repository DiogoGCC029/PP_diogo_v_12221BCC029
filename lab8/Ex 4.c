#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    
    if(&a > &b) printf("%d tem maior endereco\n", a);
    else printf("%d tem maior endereco\n", b);

    return 0;
}