
#include <stdio.h> //7
#include <stdlib.h>


int main()
{
    int v[10];
    int *p=v;
    int *m=v, *M=v;

    for(int i=0; i<5; i++){
         printf("Digite um numero: ");
         scanf("%d", p);

         if(*p>*M) M=p;
         if(*p<*m) m=p;
         p++;
    }
    printf("\nMaior: %d\nMenor: %d\n", *M,*m);
    return 0;
}