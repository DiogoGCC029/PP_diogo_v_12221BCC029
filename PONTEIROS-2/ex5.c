#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SCAN_melhorado (char *p, int tamanho);

int main(){

    char S1[50], S2[50];

    int tamanho_d_S2, ehigual=0;

    char *p1=S1;
    char *p2=S2;
    
    printf("Digite S1: ");
    SCAN_melhorado(S1, 50);
    printf("Digite S2: ");
    SCAN_melhorado(S2, 50);

    tamanho_d_S2 = strlen(S2);

    printf("\n\n%s\n%s\n%d\n", S1, S2, tamanho_d_S2);

    for(p1; *p1!='\0'; p1++){
        ehigual=1;
        for(int j=0; j<tamanho_d_S2; j++){
            if(*p1!=*p2){
                ehigual=0;
                break;
            }
            p1++;
            p2++;
        }
        if(ehigual){
            printf("S1 contem S2\n");
            break;
        }
        p2=S2;
    }

    if(ehigual==0)printf("S1 nao contem S2\n");

    return 0;
}

void SCAN_melhorado (char *p, int tamanho){

    setbuf(stdin, NULL);
    for(int i=0; i<tamanho; i++){
        scanf("%c", p);
        if(*p=='\n'){
            *p='\0';
            break;
        }
        p++;
    }
}