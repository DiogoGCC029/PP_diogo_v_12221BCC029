#include <stdio.h> //15
#include <stdlib.h>

float ehtriang (float n1, float n2, float n3);
float tipo (float n1, float n2, float n3);

int main()
{
    float n1, n2, n3;
    int result;


    printf("Digite as medidas dos lados do triangulo: ");
    scanf("%f %f %f", &n1, &n2, &n3);

        
    if(n1>0&&n2>0&&n3>0){

        if(ehtriang(n1, n2, n3)){ //a
            result=tipo(n1, n2, n3);

            switch (result){
                case 1:
                printf("Eh um triangulo escaleno\n"); break;
                case 2:
                printf("Eh um triangulo isoceles\n"); break;
                case 3:
                printf("Eh um triangulo equilatero\n"); break;
            }
        } else printf("Nao eh um triangulo\n");
    }else printf("Erro\n");

    return 0;
}



float ehtriang (float n1, float n2, float n3){

    if(n1+n2>n3||n1+n3>n2||n3+n2>n1) return 1;
    return 0;
}

float tipo (float n1, float n2, float n3){

    if(n1==n2 && n2==n3 && n3==n1) return 3;
    if(n1==n2 || n2==n3 || n3==n1) return 2;
    return 1;
}