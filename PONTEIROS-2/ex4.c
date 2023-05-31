#include <stdio.h>
#include<stdlib.h>

int main(){

    int v[5];
    int *p=&v[0];

    for(int i=0; i<5; i++){
        scanf("%d", p);
        p++;
    }
    
    p=&v[0];
    for(int i=0; i<5; i++){

        if((*p)%2==0){
                
            printf("%p guarda %d\n", p, *p);
        }
        p++;

    }
}