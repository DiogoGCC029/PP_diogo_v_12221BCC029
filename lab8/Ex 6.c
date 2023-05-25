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
    
    printf("A + B = %d\n", *ea + *eb);
    printf("A - B = %d\n", *ea - *eb);
    printf("A * B = %d\n", *ea * *eb);
    printf("A / B = %.2f\n", (*ea*1.0) / (*eb*1.0));

    return 0;
}