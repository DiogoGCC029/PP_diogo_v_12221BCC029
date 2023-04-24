
#include <stdio.h> //2
#include <stdlib.h>

int data (int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;

    printf("Digite o dia, o mes e o ano:\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    data(dia, mes, ano);

    return 0;
}


int data (int dia, int mes, int ano){

    printf("%d de ", dia);

    switch (mes){

        case 1:
        printf("janeiro"); break;
        case 2:
        printf("fevereiro"); break;
        case 3:
        printf("marco"); break;
        case 4:
        printf("abril"); break;
        case 5:
        printf("maio"); break;
        case 6:
        printf("junho"); break;
        case 7:
        printf("julho"); break;
        case 8:
        printf("agosto"); break;
        case 9:
        printf("setembro"); break;
        case 10:
        printf("outubro"); break;
        case 11:
        printf("novembro"); break;
        case 12:
        printf("desembro"); break;
    }

    printf(" de %d\n", ano);
}


