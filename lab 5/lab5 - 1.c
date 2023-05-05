#include <stdio.h>
#include <stdlib.h> //1

int main(){

    int A[5], variavel_inteira_simples;

    A[0]=1;
    A[1]=0;
    A[2]=5;        //a)
    A[3]=-2;
    A[4]=-5;
    A[5]=7;

    variavel_inteira_simples= A[0]+A[1]+A[5];   //b)

    printf("variavel inteira simples = %d\n", variavel_inteira_simples);

    A[4]=100;     //c)

    for(int i=0;i<6;i++){
        printf("A[%d] = %d\n", i, A[i]);     //d)
    }

    return 0;
}