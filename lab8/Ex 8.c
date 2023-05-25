#include <stdio.h>
#include <stdlib.h>

int main(){

    float v[6];
    float *pp=&v[0];

    for(int i=0; i<6; i++){
            
        printf("Digite um numero: ");
        scanf("%f", &v[i]);
    }
    
    for(int i=0; i<6; i++){

        printf("%p guarda v[%d] = %.3f\n", pp, i, *pp);
        pp++;
    }

    return 0;
}