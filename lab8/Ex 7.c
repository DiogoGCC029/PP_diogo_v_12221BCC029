#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, X;

    int* ea;
    int* eb;
    int* ec;

    ea=&a;
    eb=&b;
    ec=&c;


    printf("Digite A: ");
    scanf("%d", ea);
    printf("Digite B: ");
    scanf("%d", eb);
    printf("Digite C: ");
    scanf("%d", ec);
    
    if(*ea<*eb){
        if(*ec<*ea){
            //CAB           1
            X=*ea;
            *ea=*ec;
            *ec=*eb;
            *eb=X;
        }else{//(A<B,C)
            
            if(*eb<*ec){
                //ABC           2
                X=*ea;
            }else{
                //ACB           3
                X=*eb;
                *eb=*ec;
                *ec=X;
            }
        }
    }else{ //(B<A)

        if(*ea<*ec){
            //BAC           4
            X=*eb;
            *eb=*ea;
            *ea=X;

        }else{//(B,C<A)

            if(*eb<*ec){
                //BCA           5
                X=*ea;
                *ea=*eb;
                *eb=*ec;
                *ec=X;

            }else{
                //CBA           6
                X=*ea;
                *ea=*ec;
                *ec=X;
            }
        }
    }
    printf("%p guarda %d\n", ea, *ea);
    printf("%p guarda %d\n", eb, *eb);
    printf("%p guarda %d\n", ec, *ec);

    return 0;
}