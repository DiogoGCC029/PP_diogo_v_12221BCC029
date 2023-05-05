#include <stdio.h>
#include <stdlib.h>     //m8

int main(){

    float A[2][2], B[2][2], operador;
    char variavel;

    printf("Digite a matriz A:\n\n");
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
                
            scanf("%f", &A[i][j]);

        }
    }

    printf("Digite a matriz B:\n\n");
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
                
            scanf("%f", &B[i][j]);

        }
    }

    while(1){
            
        printf("\nEscolha uma das opcoes a seguir:\n");
        printf("(a) somar as duas matrizes\n");
        printf("(b) subtrair a primeira matriz da segunda\n");
        printf("(c) adicionar uma constante a1 2 3 4s duas matrizes\n");
        printf("(d) imprimir as matrizes\n");

        variavel = getchar();
        variavel = getchar();

        if(variavel=='d'){
            
            printf("\nSegue a matriz A:\n");
            for(int i=0;i<2;i++){

                for(int j=0; j<2; j++){
                    printf("%.3f ", A[i][j]);
                }
                printf("\n");
            }            
            printf("\nSegue a matriz B:\n");
            for(int i=0;i<2;i++){

                for(int j=0; j<2; j++){
                    printf("%.3f ", A[i][j]);
                }
                printf("\n");
            }

            break;
        }else{

            if(variavel=='a'){

                for(int i=0;i<2;i++){

                    for(int j=0; j<2; j++){
                        
                        A[i][j] += B[i][j];
                        B[i][j] = A[i][j];
                    }
                }
            }else{

                if(variavel=='b'){

                    for(int i=0;i<2;i++){

                        for(int j=0; j<2; j++){
                            
                            B[i][j] -= A[i][j];
                        }
                    }
                }else{

                    if(variavel=='c'){

                        printf("\nDigite  a constante a ser somada: ");
                        scanf("%f", &operador);

                        for(int i=0;i<2;i++){

                            for(int j=0; j<2; j++){
                                A[i][j] += operador;
                                B[i][j] += operador;
                            }
                        }
                    } else printf("\n[Erro]\n");
                }
            }
        }

    }
    return 0;

}
