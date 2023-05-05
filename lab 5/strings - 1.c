#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024];

    scanf("%s", &str);

    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    return 0;

}
