#include <stdio.h> //1
#include <stdlib.h>

int main(){

    float A, B;

    printf("Digite 2 numeros\n");
    scanf ("%f %f", &A, &B);

    if(A>B) printf("O maior eh %f\n", A);
    if(B>A) printf("O maior eh %f\n", B);
    if(A==B) printf("%f e %f sao iguais\n", A, B);

    return 0;
}
#include <stdio.h> //2
#include <stdlib.h>
#include <math.h>

int main(){

    float A;

    printf("Digite um numero: ");
    scanf ("%f", &A);

    if(A>0) printf("A raiz quadrada desse numero eh %.2lf\n", sqrt(A));
    else printf("Esse numero eh invalido\n");

    return 0;
}
#include <stdio.h> //3
#include <stdlib.h>
#include <math.h>

int main(){

    float A;

    printf("Digite um numero: ");
    scanf ("%f", &A);

    if(A>0) printf("A raiz quadrada desse numero eh %.2lf\n", sqrt(A));
    else printf("O valor do quadrado desse numero eh%.2lf\n", A*A);

    return 0;
}
#include <stdio.h> //4
#include <stdlib.h>
#include <math.h>

int main(){

    float A;

    printf("Digite um numero: ");
    scanf ("%f", &A);

    if(A>0){
        printf("O valor do quadrado desse numero eh %.2lf\n", A*A);
        printf("A raiz quadrada desse numero eh %.2lf\n", sqrt(A));
    }

    return 0;
}
#include <stdio.h> //5
#include <stdlib.h>

int main(){

    int A;

    printf("Digite um numero: ");
    scanf ("%d", &A);

    if(A%2==0) printf("Esse numero eh par\n");
    else
        printf("Esse numero eh impar\n");

    return 0;
}
#include <stdio.h> //6
#include <stdlib.h>

int main(){

    int A, B;

    printf("Digite um numero: ");
    scanf ("%d", &A);
    printf("Digite um numero: ");
    scanf ("%d", &B);

    if(A>B) printf("%d eh maior que %d, sendo que a diferenca entre eles eh %d\n", A, B, A-B);
    if(A<B) printf("%d eh maior que %d, sendo que a diferenca entre eles eh %d\n", B, A, B-A);

    if(A==B) printf("%d e %d sao iguais, e a diferenca entre eles nao exites (vale 0)\n", A, B);

    return 0;
}
#include <stdio.h> //7
#include <stdlib.h>

int main(){

    int A, B;

    printf("Digite um numero: ");
    scanf ("%d", &A);
    printf("Digite um numero: ");
    scanf ("%d", &B);

    if(A>B) printf("%d eh maior que %d\n", A, B);
    if(A<B) printf("%d eh maior que %d\n", B, A);
    if(A==B) printf("Numeros iguais");

    return 0;
}

#include <stdio.h> //8
#include <stdlib.h>

int main(){

    float A, B;

    printf("Digite uma nota etre 0 e 10.0: ");
    scanf ("%f", &A);
    printf("Digite uma nota etre 0 e 10.0: ");
    scanf ("%f", &B);

    if((0<=A)&&(A<=10)&&(0<=B)&&(B<=10)) printf("\nA media eh %.4f\n", (A+B)/2);
    else printf("\nNota invalida apresentada\n");

    return 0;
}

#include <stdio.h> //9
#include <stdlib.h>

int main(){

    float A, B;

    scanf ("%f %f", &A, &B);

    if(A>B) printf("\nEmprestimo concedido\n");
    else printf("\nEmprestimo nao concedido\n");

    return 0;
}

#include <stdio.h> //10
#include <stdlib.h>

int main(){

    float A;

    char s;

    printf("Digite sua altura: ");
    scanf ("%f", &A);



    printf("Digite seu sexo: ");
    scanf (" %c", &s);

    if(s=='m'||s=='M') printf("\nSeu peso ideal eh %.3f\n", (72.7*A)-58);
    else{
        if(s=='F'||s=='f') printf("\nSeu peso ideal eh %.3f\n", (62.1*A)-44,7);
        else printf ("\nOpcao invalida\n");

    }

    return 0;
}
#include <stdio.h> //11
#include <stdlib.h>

int main(){

    int A;

    int i=0, S=0;

    printf("Digite um numero maior que 0: ");
    scanf ("%d", &A);


    if(A>0){ //Só roda se A>0

        while(A>0){

                S=S+(A%(10^i));
                A=A/(10^i);

        }
    printf("%d\n", S);


    }

    return 0;
}

#include <stdio.h> //12
#include <stdlib.h>
#include <math.h>

int main(){

    int A;

    printf("Digite um numero maior que 0: ");
    scanf ("%d", &A);

    if(A>0) printf("%.3f", log10(A*1.0));

    return 0;
}

#include <stdio.h> //13
#include <stdlib.h>

int main(){

    int A, B, C;
    float S;


    printf("Digite as 3 notas abaixo: \n");
    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C);

    S=(A+B+C+C)/4.0;

    printf("A media do estudante eh %.3f", S);


    if(S>=60) printf(" e ele foi aprovado\n");
    else printf(" e ele foi reprovado");


    return 0;
}

#include <stdio.h> //14
#include <stdlib.h>

int main(){

    float A, B, C, S=0;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf ("%f", &A);

    printf("Digite a nota da Avaliação Semestral: ");
    scanf ("%f", &B);

    printf("Digite a nota do Exame Final: ");
    scanf ("%f", &C);

    S=((A*2)+(B*3)+(C*5))/10.0;


    if(A>10||A<0||B>10||B<0||C>10||C<0)
        printf ("Nota nao aceita\n");
    else{

        printf("A media do estudante eh %.2f", S);

        if(S>4.9) printf(" e ele foi aprovado\n");
        else{
            if(S>2.9) printf(" e ele esta de recuperacao\n");
            else printf(" e ele foi reprovado\n");
        }

    }
    return 0;
}

#include <stdio.h> //15
#include <stdlib.h>

int main(){

    int A;

    scanf("%d", &A);

    switch(A){

        case 1: printf("domingo\n"); break;
        case 2: printf("segunda-feira\n"); break;
        case 3: printf("terca-feira\n"); break;
        case 4: printf("quarta-feira\n"); break;
        case 5: printf("quinta-feira\n"); break;
        case 6: printf("sexta-feira\n"); break;
        case 7: printf("sabado\n"); break;

        default: printf("numero nao aceito\n"); break;

    }
    return 0;
}
#include <stdio.h> //16
#include <stdlib.h>

int main(){

    int A;

    scanf("%d", &A);

    switch(A){

        case 1: printf("janeiro\n"); break;
        case 2: printf("fevereiro\n"); break;
        case 3: printf("marco\n"); break;
        case 4: printf("abriu\n"); break;
        case 5: printf("maio\n"); break;
        case 6: printf("junho\n"); break;
        case 7: printf("julho\n"); break;
        case 8: printf("agosto\n"); break;
        case 9: printf("setembro\n"); break;
        case 10: printf("outubro\n"); break;
        case 11: printf("novembro\n"); break;
        case 12: printf("desembro\n"); break;

        default: printf("numero nao aceito\n"); break;

    }
    return 0;
}

#include <stdio.h> //17
#include <stdlib.h>

int main(){

    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    printf("A area do trapesio eh %.2f\n", ((A+B)*C)/2);
    return 0;
}
#include <stdio.h> //18
#include <stdlib.h>

int main(){

    int A;
    float X, Y;

    printf("Escolha uma opcao:\n\n");

    printf("Opcao 1: Soma\n");
    printf("Opcao 2: Subtracao\n");
    printf("Opcao 3: Multiplicacao\n");
    printf("Opcao 4: Divisao\n");

    scanf("%d", &A);

    printf("Escreva dois valores:\n");
    scanf("%f %f", &X, &Y);

    switch(A){

        case 1: printf("O resultado eh %.2f\n", X+Y); break;
        case 2: printf("O resultado eh %.2f\n", X-Y); break;
        case 3: printf("O resultado eh %.2f\n", X*Y); break;
        case 4: printf("O resultado eh %.2f\n", X/Y); break;

        default: printf("numero nao aceito\n"); break;

    }

    return 0;
}
#include <stdio.h> //19
#include <stdlib.h>

int main(){

    int A;

    scanf("%d", &A);

    if(A%3==0&&A%5!=0) printf("O numero eh divisivel por 3 mas nao por 5\n");
    if(A%3!=0&&A%5==0) printf("O numero eh divisivel por 5 mas nao por 3\n");

    return 0;
}

#include <stdio.h> //20
#include <stdlib.h>

int main(){

    float A, B, C;

    printf("Digite os 3 lados do triangulo desejado:\n");
    scanf("%f %f %f", &A, &B, &C);

    if(A+B<C||B+C<A||A+C<B) printf("Essas medidas nao formam um triangulo\n");
    else{
        if(A==B&&B==C) printf("Eh um triangulo equilatero\n");
        else{
            if(A==B||A==C||B==C) printf("Eh um triangulo isoceles\n");
            else printf("Eh um triangulo escaleno\n");
        }
    }

    return 0;
}

#include <stdio.h> //21
#include <stdlib.h>

int main(){

    int A;
    float X, Y;

    printf("Escolha uma opcao:\n\n");

    printf("1- Soma de dois numeros\n");
    printf("2- Diferenca entre dois numeros\n");
    printf("3- Produto entre dois numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser 0)\n");

    scanf("%d", &A);

    printf("Escreva dois valores:\n");
    scanf("%f %f", &X, &Y);

    if (Y==0&&A==4){
        printf("Nao existe divisao por 0\n");
        end();
    }

    switch(A){

        case 1: printf("O resultado eh %.2f\n", X+Y); break;
        case 2: printf("O resultado eh %.2f\n", X-Y); break;
        case 3: printf("O resultado eh %.2f\n", X*Y); break;
        case 4: printf("O resultado eh %.2f\n", X/Y); break;

        default: printf("numero nao aceito\n"); break;

    }

    return 0;
}
#include <stdio.h> //22
#include <stdlib.h>

int main(){


    int A, B;

    printf("Escreva um ano\n");
    scanf("%d", &A);


    if (A%4==0)
        printf("Eh ano bissexto!\n");
        else printf("Nao eh ano bissexto\n");


    return 0;
}

#include <stdio.h> //23
#include <stdlib.h>

int main(){


    int A, B;

    printf("Escreva sua idade (em anos): ");
    scanf("%d", &A);

    printf("Escreva seu tempo de servico (em anos): ");
    scanf("%d", &B);

    if (A>=65||B>=30||(A>=60&&B>=25))
        printf("Ja pode aposentar\n");
        else printf("Ainda nao pode aposentar\n");


    return 0;
}


#include <stdio.h> //24
#include <stdlib.h>

int main(){

    int A;
    float X;

    printf("Escolha uma opcao de estado:\n\n");

    printf("Opcao 1: MG\n");
    printf("Opcao 2: SP\n");
    printf("Opcao 3: RJ\n");
    printf("Opcao 4: MS\n");

    scanf("%d", &A);

    printf("Escreva o preco do produto:\n");
    scanf("%f", &X);

    switch(A){

        case 1: printf("O preco final eh %.2f\n", X*1.07); break;
        case 2: printf("O preco final eh %.2f\n", X*1.12); break;
        case 3: printf("O preco final eh %.2f\n", X*1.15); break;
        case 4: printf("O preco final eh %.2f\n", X*1.08); break;

        default: printf("numero nao aceito\n"); break;

    }

    return 0;
}

#include <stdio.h> //25
#include <stdlib.h>

int main(){

    float A, B, C, D;

    printf("Digite os coeficientes A, B e C da equacao de segundo grau:\n");
    scanf("%f %f %f", &A, &B, &C);

    D=(B*B)-(4*A*C);

    if(A==0) printf ("Nao eh equacao de segundo grau\n");
    else{

        if(D<0) printf("Nao existe raiz");
        if(D==0) printf("Raiz unica\n");
        if(D>0) printf("As raizes sao %.2f e %.2f", (D-B)/(2*A), (-D-B)/(2*A));

    }
    return 0;
}

#include <stdio.h> //26
#include <stdlib.h>

int main(){

    float A, B, C;

    printf("Digite a distancia percorrida (em Km): ");
    scanf("%f", &A);

    printf("Digite o consumo do carro (em L de gasolina): ");
    scanf("%f", &B);

    C=A/B;

    if(C<8) printf ("Venda o carro!\n");
    else{
        if(C>14) printf("Super economico!");
        else printf("Economico!");

    }

    return 0;
}

#include <stdio.h> //27
#include <stdlib.h>

int main(){

    int A;

    printf("Digite a idade do atleta: ");
    scanf("%d", &A);

    if(A<5) printf ("Novo demais\n");

    if(A>=5&&A<=7) printf ("Infantil A\n");
    if(A>=8&&A<=10) printf ("Infantil B\n");
    if(A>=11&&A<=13) printf ("Juvenil A\n");
    if(A>=14&&A<=17) printf ("Juvenil B\n");
    if(A>17) printf ("Senior\n");

    return 0;
}



#include <stdio.h> //28
#include <stdlib.h>
#include <math.h>

int main(){

    int i;
    float A, B, C;

    printf("Escolha uma opcao:\n\n");

    printf("Opcao 1: Media Geometrica\n");
    printf("Opcao 2: Media Ponderada\n");
    printf("Opcao 3: Media Harmonica\n");
    printf("Opcao 4: Media Aritmetica\n");

    scanf("%d", &i);

    printf("Escreva 3 valores inteiros positivos:\n");
    scanf("%f %f %f", &A, &B, &C);

    if(A<1||B<1||C<1){
        printf("Numeros nao aceitos");
        end();
    }

    switch(i){

        case 1: printf("O resultado eh %.2f\n", cbrt(A*B*C)); break;
        case 2: printf("O resultado eh %.2f\n", (A+(2*B)+(3*C))/3); break;
        case 3: printf("O resultado eh %.2f\n", 1/((1/A)+(1/B)+(1/C))); break;
        case 4: printf("O resultado eh %.2f\n", (A+B+C)/3); break;

        default: printf("numero nao aceito\n"); break;

    }

    return 0;
}



#include <stdio.h> //29
#include <stdlib.h>

int main(){

    int i=0, A, B, placar=0, R;

    while(i<5){

        A=rand();
        B=rand();

        A=A%100;
        B=B%100;

        printf("Qual o resultado de %d+%d?\n", A, B);
        i++;
        scanf("%d", &R);

        if(R==A+B){
            printf("Parabéns! eh a resposta certa!\n\n", A+B);
            placar++;
        }else printf("Nao foi dessa vez...A resposta era %d...\n\n", A+B);
    }

    printf("No total, voce acertou %d pergontas de 5.\n", placar);

    return 0;
}


#include <stdio.h> //30
#include <stdlib.h>

int main(){

    int A, B, C;

    printf("Digite 3 valores:\n");
    scanf("%d %d %d", &A, &B, &C);

    if(A<B&&A<C){
        printf("%d\n", A);
        if(B<=C) printf("%d\n%d\n", B, C);
        else printf("%d\n%d\n", C, B);
    }
    if(B<=A&&B<=C){
        printf("%d\n", B);
        if(A<=C) printf("%d\n%d\n", A, C);
        else printf("%d\n%d\n", C, A);
    }
    if(C<B&&C<A){
        printf("%d\n", C);
        if(A<=B) printf("%d\n%d\n", A, B);
        else printf("%d\n%d\n", B, A);
    }
}


#include <stdio.h> //31
#include <stdlib.h>

int main(){

    float A, B;

    int h;

    printf("Digite sua altura: ");
    scanf("%f", &A);
    printf("Digite seu peso: ");
    scanf("%f", &B);

    if(A>=1.2&&A<=1.7) h=2;
    if(A>1.7) h=3;
    if(A<1.2) h=1;

    switch(h){

        case 1:
        if(B>=60&&B<=90) printf("Classificacao C\n");
        if(B>90) printf("Classificacao G\n");
        if(B<60)printf("Classificacao A\n");
        break;


        case 2:
        if(B>=60&&B<=90) printf("Classificacao E\n");
        if(B>90) printf("Classificacao H\n");
        if(B<60)printf("Classificacao B\n");
        break;


        case 3:
        if(B>=60&&B<=90) printf("Classificacao F\n");
        if(B>90) printf("Classificacao I\n");
        if(B<60)printf("Classificacao C\n");
        break;

    }
}


#include <stdio.h> //32
#include <stdlib.h>

int main(){

    float P;

    int qt, op;

    printf("Dogite o codigo do produto: ");
    scanf("%d", &op);
    printf("Dogite a quantidade comprada: ");
    scanf("%d", &qt);

    switch(op){

        case 100: P=1.2; break;
        case 101: P=1.3; break;
        case 102: P=1.5; break;
        case 103: P=1.2; break;
        case 104: P=1.7; break;
        case 105: P=2.2; break;
        case 106: P=1.0; break;

        default: printf("Codigo nao aceito\n"); end();
    }

    printf("O preco final da compra eh de %.2f", P*qt);

    return 0;
}



#include <stdio.h> //33
#include <stdlib.h>

int main(){

    float Pa, Pn;

    printf("Qual o preco antigo do produto?\n");
    scanf("%f", &Pa);

    if(Pa>50.0&&Pa<=100.0)Pn=Pa*1.05;
    if(Pa>100)Pn=Pa*1.1;
    if(Pa<=50)Pn=Pa*1.15;


    printf("O novo preco do produto eh de %.2f\n\n", Pn);

    if(Pn<80) printf("Barato\n");
    if(Pn>80&&Pn<=120) printf("Normal\n");
    if(Pn>120&&Pn<=200) printf("Caro\n");
    if(Pn>200) printf("Muito caro\n");

    return 0;
}


#include <stdio.h> //34
#include <stdlib.h>

int main(){

    float nota;
    int F;
    char conceito;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite a qunatidade de faltas: ");
    scanf("%f", &F);

    if(nota<0||nota>10){
        printf("Nota nao aceita\n");
        end();
    }else{

        if(nota>=0&&nota<=3.9) conceito='E';
        if(nota>=4&&nota<=4.9) conceito='D';
        if(nota>=5&&nota<=7.4) conceito='C';
        if(nota>=7.5&&nota<=8.9) conceito='B';
        if(nota>=9&&nota<=10) conceito='A';
    }

    if(F>20)conceito++;

    if(conceito=='F') conceito='E';

    printf("O conceito final do aluno eh %c\n", conceito);

    return 0;
}


#include <stdio.h> //34
#include <stdlib.h>

int main(){

    float nota;
    int F;
    char conceito;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite a qunatidade de faltas: ");
    scanf("%f", &F);

    if(nota<0||nota>10){
        printf("Nota nao aceita\n");
        end();
    }else{

        if(nota>=0&&nota<=3.9) conceito='E';
        if(nota>=4&&nota<=4.9) conceito='D';
        if(nota>=5&&nota<=7.4) conceito='C';
        if(nota>=7.5&&nota<=8.9) conceito='B';
        if(nota>=9&&nota<=10) conceito='A';
    }

    if(F>20)conceito++;

    if(conceito=='F') conceito='E';

    printf("O conceito final do aluno eh %c\n", conceito);

    return 0;
}


#include <stdio.h> //35
#include <stdlib.h>

int main(){

    int dia, mes, ano, Smes=0;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);


    if(ano<0||dia<=0||mes<=0){
        printf("Data invalida\n");
        end();
    }

    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)Smes=31;
    if(mes==4||mes==6||mes==9||mes==11) Smes=30;
    if(mes=2)Smes=28;



    if(dia>Smes){
        printf("Data invalida %d\n", Smes);
        end();
    }else printf("Data validada\n");
    return 0;
}



#include <stdio.h> //36
#include <stdlib.h>

int main(){

    float V;

    printf("Dogite a venda mensal: ");
    scanf("%f", &V);

    if(V>=100000) printf("A comissao eh de %.2f\n", 0.16*V+700);
    if(V>=80000&&V<100000) printf("A comissao eh de %.2f\n", 0.14*V+650);
    if(V>=60000&&V<80000) printf("A comissao eh de %.2f\n", 0.14*V+600);
    if(V>=40000&&V<60000) printf("A comissao eh de %.2f\n", 0.14*V+700);
    if(V>=20000&&V<40000) printf("A comissao eh de %.2f\n", 0.14*V+700);
    if(V<20000) printf("A comissao eh de %.2f\n", 0.14*V+700);

    return 0;
}


#include <stdio.h> //37
#include <stdlib.h>
#include <math.h>

int main(){

    int Chora, Cmin, Shora, Smin, R, i=1, tempo;
    float result=0;

    printf("Digite o horario de chegada: ");
    scanf("%d %d", &Chora, &Cmin);
    printf("Dogite o horario de saida: ");
    scanf("%d %d", &Shora, &Smin);

    if(Chora>Shora)R=(24-Chora)+Shora;
    else R=Shora-Chora;

    tempo=(60*R)+Smin-Cmin;

    if(tempo%60!=0)R=(tempo/60)+1;
    else R=tempo/60;

    printf("deve pagar %d horas\n", R);

    while(i<=R){
        if(i<3)result++;
        else{
            if(i<5)result=result+1.4;
            else result+=2;
        }
        i++;

    }

    printf("deve pagar %.2f\n", result);

    return 0;
}


#include <stdio.h> //38
#include <stdlib.h>

int main(){

    int dia, mes, ano, Smes=0;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);


    if(ano<0||dia<=0||mes<=0||mes>12||ano>2022){
        printf("Data invalida\n");
        end();
    }

    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)Smes=31;
    if(mes==4||mes==6||mes==9||mes==11) Smes=30;
    if(mes=2)Smes=28;



    if(dia>Smes){
        printf("Data invalida %d\n", Smes);
        end();
    }else printf("Data validada\n");
    return 0;
}



#include <stdio.h> //39
#include <stdlib.h>

int main(){

    int t;
    float s, Ns;

    printf("Digite o salario: ");
    scanf("%f", &s);
    printf("Digite o tempo de servico: ");
    scanf("%d", &t);


    if(s<=500) Ns=s*1.25;
    if(s>500&&s<=1000) Ns=s*1.2;
    if(s>1000&&s<=1500) Ns=s*1.15;
    if(s>1500&&s<=2000) Ns=s*1.1;
    if(s>2000) Ns=s;

    if(t>1&&t<=3) Ns=Ns+100;
    if(t>3&&t<=6) Ns=Ns+200;
    if(t>6&&t<=10) Ns=Ns+300;
    if(t>10) Ns=Ns+500;

    if(Ns==s) printf("Nao ganhou aumento\n");
    else printf("O novo salario eh de %.2f\n", Ns);


    return 0;
}


#include <stdio.h> //40
#include <stdlib.h>

int main(){

    float C;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &C);


    if(C<=12000.00)printf("O preco para o consumidor eh de %.2f\n", C*1.05);
    else{
        if(C<=25000.00)printf("O preco para o consumidor eh de %.2f\n", C*1.1*1.15);
        else printf("O preco para o consumidor eh de %.2f\n", C*1.15*1.2);
    }
    return 0;
}



