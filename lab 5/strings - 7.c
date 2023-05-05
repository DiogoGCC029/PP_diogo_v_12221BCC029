#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024];

    printf("Digite a string: ");
    
    for(int i=0; 1; i++){
        str[i]=getchar();
        if(str[i]==' '){
            i--;
        }
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    printf("\nA stirng resultante eh a seguinte:\n\n%s\n", str);

    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    return 0;

}
