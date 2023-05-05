#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char fala[300], Cebolinhes[300];
    int i=0, j=0;

    fgets(fala, 300, stdin);

    while(fala[i]!='\0'){

        if((fala[i]=='r' || fala[i]=='R') && ((fala[i+1]>64 && fala[i+1]<91) || (fala[i+1]>96 && fala[i+1]<123))){
            Cebolinhes[j]=fala[i]-6;
            if(fala[i+1]=='r' || fala[i+1]=='R')i++;
        }
        else if(fala[i]=='\n'){
            Cebolinhes[j]='\0';
            break;
        }else Cebolinhes[j]=fala[i];
        i++;
        j++;
    }

    printf("%s\n", Cebolinhes);

    return 0;
}