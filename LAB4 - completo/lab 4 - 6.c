#include <stdio.h> //6
#include <stdlib.h>

int conversor (int h, int m, int s);

int main()
{
    int result, h, m, s;

    printf("Digite as, os minutos e os segundos: ");
    scanf("%d %d %d", &h, &m, &s);
    result=conversor(h, m, h);
    printf("No total, se conta %d segundos\n", result);

    return 0;
}




int conversor (int h, int m, int s){

    return s+60*m+3600*h;
}
