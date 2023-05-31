
#include <stdio.h> //6
#include <stdlib.h>


int main()
{
    float v[5], x;
    float *p=&x;

    for(int i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%f", p);
        p++;
    }
    p=&v[0]-1;

    for(int i=0; i<5; i++){

        printf("%.3f\n", *p);
        p++;
    }
    return 0;
}
