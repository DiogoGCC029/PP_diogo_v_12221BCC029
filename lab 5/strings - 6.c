#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024];

    printf("Digite a string: ");
    scanf("%s", &str);

    for(int i=0; str[i]!='\0';i++){
        str[i]-=32;
    }

    printf("\nA stirng resultante eh a seguinte:\n\n%s\n", str);

    return 0;

}
