
#include <stdio.h>    //13
#include <stdlib.h>

int main()
{
    int i=0, S=0;

    while(i<1000){
        if(i%3==0||i%5==0){
            printf("%d  ", i);
        S=S+i;
        }
        i++;
    }
    printf("A soma de todos os multiplos de 1000 eh %d", S);

    return 0;

}