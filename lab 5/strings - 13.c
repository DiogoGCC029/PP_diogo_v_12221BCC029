#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[100];

    int i=0, j=0;

    printf("Digite a string: ");
    
    for(int i=0; 1; i++){
        str[i]=getchar();

        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        
        if(str[i]<65 || str[i]>122 || (str[i]>90 && str[i]<97))
        {
            i--;
        }
    }

    while (str[j]!='\0'){     //j guarda o tamanho máximo da string
        j++;
    }j--;

    while (i<j){
        if(str[i]>90)str[i]-=32;
        if(str[j]>90)str[j]-=32;
        printf("%c -- %c\n", str[i], str[j]);
        if(str[i]!=str[j]){
            printf("Nao eh palindromo\n");
            exit(0);
        }
        i++;
        j--;
    }

    printf("Eh palindromo\n");


    return 0;

}
