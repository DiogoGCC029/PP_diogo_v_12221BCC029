#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024], letra, letraS;

    printf("Digite a string: ");
    scanf("%s", &str);

    printf("\nDigite a letra deve ser substituida: ");
    scanf(" %c", &letra);
    printf("\nPor qual caractere devo substitui-la? ");
    scanf(" %c", &letraS);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==letra) str[i]=letraS;
    }

    printf("\nA stirng resultante eh a seguinte:\n\n%s\n", str);

    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    return 0;

}
