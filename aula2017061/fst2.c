#include <stdio.h>
#include <stdlib.h>

struct Divisao {
int num,den;



};

struct Divisao dividir (int a, int b,int c,int d){
    struct Divisao resposta;
    resposta.num= d*a + c*b;
    resposta.den=b*d;

    return resposta;

//return (struct Divisao) {a/b, a%b};
};

int main ()  {
    struct Divisao resposta;
    int a,b,c,d;
printf("Entre com Numerador 1 e denominador 1\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Entre com Numerador 2 e denominador 2\n");
scanf("%d",&c);
scanf("%d",&d);
resposta=dividir(a,b,c,d);
printf("resposta :  %d / %d\n",resposta.num,resposta.den);//resposta.quo,resposta.resto);



return 0;
}
