
#include <stdio.h>    //2
#include <stdlib.h>

int main()
{
    int i=0;

    for(i=1; i!=101; i++){
        printf ("%d\n", i);
    }
    i=1;

    while(i!=101){
        printf ("%d\n", i);
        i++;
    }
    i=1;

    do{
        printf ("%d\n", i);
        i++;
    }while(i!=101);


    return 0;
}
