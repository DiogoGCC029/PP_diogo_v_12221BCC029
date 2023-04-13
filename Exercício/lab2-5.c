#include <stdio.h>    //5
#include <stdlib.h>

int main()
{
    int i=0, A, S=0;

    while(i<10){
        printf ("Digite um numero: ");
        scanf("%d", &A);
        S=S+A;
        i++;
    }

    printf("A soma eh de %d\n", S);

    return 0;
}



#include <stdio.h>    //6
#include <stdlib.h>

int main()
{
    int i=0, A;

    float S=0;

    while(i<10){
        printf ("Digite um numero: ");
        scanf("%d", &A);
        S=S+A;
        i++;
    }

    printf("A media eh de %.2f\n", S/10);

    return 0;
}


#include <stdio.h>    //7
#include <stdlib.h>

int main()
{
    int A, i=0, c=0;

    float S=0;

    while(i<10){
        printf ("Digite um numero: ");
        scanf("%d", &A);
        if(A>0){
            S=S+A;
            c++;
        }
        i++;
    }

    printf("A soma eh de %.2f\n", S/c);

    return 0;

}


#include <stdio.h>    //8
#include <stdlib.h>

int main()
{
    int i=0;

    float A, M, m;

    printf ("Digite um numero: ");
    scanf("%f", &A);

    M=A;
    m=A;

    while(i<9){
        printf ("Digite um numero: ");
        scanf("%f", &A);
        if(A>M)M=A;
        if(A<m)m=A;
        i++;
    }

    printf("O maior eh %.2f e o menor eh %.2f\n", M, m);

    return 0;

}



#include <stdio.h>    //9
#include <stdlib.h>

int main()
{
    int N, i=0, I=1;

    printf ("Digite um numero: ");
    scanf("%d", &N);

    while(i<N){
        printf ("%d   ", I);
        I=I+2;
        i++;
    }

    return 0;

}
