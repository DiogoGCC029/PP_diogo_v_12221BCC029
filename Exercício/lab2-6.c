
#include <stdio.h>    //6
#include <stdlib.h>

int main()
{
    int i=0, A;

    float S=0;

    while(i<10){
        printf ("Digite um numero: ");
        scanf("%d", &A);
        S=S+A;
        i++;
    }

    printf("A media eh de %.2f\n", S/10);

    return 0;
}
