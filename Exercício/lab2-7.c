

#include <stdio.h>    //7
#include <stdlib.h>

int main()
{
    int A, i=0, c=0;

    float S=0;

    while(i<10){
        printf ("Digite um numero: ");
        scanf("%d", &A);
        if(A>0){
            S=S+A;
            c++;
        }
        i++;
    }

    printf("A soma eh de %.2f\n", S/c);

    return 0;

}

