#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024], result=0;

    scanf("%s", &str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='1') result++;
    }

    printf("Existem %d numeros 1 nessa string", result);
    return 0;

}
