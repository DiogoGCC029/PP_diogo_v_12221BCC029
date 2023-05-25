#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    
    if(&a > &b) printf("A tem maior endereco: \n\n%p\n", &a);
    else printf("B tem maior endereco: \n\n%p\n", &b);

    return 0;
}