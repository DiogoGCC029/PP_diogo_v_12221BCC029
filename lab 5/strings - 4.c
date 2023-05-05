#include <stdio.h>
#include <stdlib.h>     //str1

int main(){

    char str[1024], letra;
    int vogais=0, consoantes=0, tamanho=0;

    printf("Digite a string: ");
    scanf("%s", &str);

    while (str[tamanho]!='\0'){
        tamanho++;
    }

    int guardavogal[tamanho];

    for(int i=0; i<=tamanho; i++){
        guardavogal[i]=0;
    }

    for(int i=0; str[i]!='\0'; i++){

        if((str[i]>96 && str[i]<123)){

            switch (str[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            vogais++;
            guardavogal[i]=1;
            break;

            //a
            case 'b':
            case 'c':
            case 'd':
            //e
            case 'f':
            case 'g':
            case 'h':
            //i
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            //o
            case 'p':
            case 'r':
            case 's':
            case 't':
            //u
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            consoantes++;
            break;
            
            }
        }

        if((str[i]>40 && str[i]<91)){
            
            switch (str[i]+32)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            vogais++;
            guardavogal[i]=1;
            break;

            //a
            case 'b':
            case 'c':
            case 'd':
            //e
            case 'f':
            case 'g':
            case 'h':
            //i
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            //o
            case 'p':
            case 'r':
            case 's':
            case 't':
            //u
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            consoantes++;
            break;
            
            }
        }
    }

    printf("\nDigite a letra peloa qual as vogais serao substituidas: ");
    
    letra=getchar();
    letra=getchar();

    printf("OK\n");

    for(int i=0; str[i]!='\0'; i++){
        if(guardavogal[i]) str[i]=letra;
    }

    printf("\nString final:\n\n%s\n", str);

    return 0;

}
