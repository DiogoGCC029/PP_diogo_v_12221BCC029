#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    int* ea;
    int* eb;

    ea=&a;
    eb=&b;

    printf("Digite A: ");
    scanf("%d", ea);
    printf("Digite B: ");
    scanf("%d", eb);
    
    *ea *= 2;
    *eb *= 2;

    printf("2A = %d\n2B = %d\n", a, b);

    return 0;
}