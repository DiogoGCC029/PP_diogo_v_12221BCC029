#include <stdio.h>
#include <stdlib.h>     //str1


int main(){

    char str[1024], i=0;

    scanf("%s", &str);

    while (str[i]!='\0'){
        i++;
    }

    for (int j=i; j>=0; j--){
        printf("%c", str[j]);
    }

    printf("\n");

    return 0;

}
