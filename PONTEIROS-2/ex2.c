#include <stdio.h>
#include<stdlib.h>

int main(){

    float m[3][3];
    float *p=&m[0][0];

    int i;
    
    p=&m[0];
    for(i=0; i<9; i++){

        printf("%p guarda %.3f    ", p, *p);
        p++;
        printf("\n");
    }
}