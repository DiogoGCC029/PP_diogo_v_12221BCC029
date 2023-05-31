#include <stdio.h>
#include<stdlib.h>

int main(){

    float v[10];
    float *p=&v[0];

    for(int i=0; i<10; i++){
        scanf("%f", p);
        p++;
    }
    
    p=&v[0];
    for(int i=0; i<10; i++){
        printf("%p guarda %.3f\n", p, *p);
        p++;
    }
}