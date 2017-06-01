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


void funcao (int x,int y)
{
    int mdc1,mdc2,u,v;
u=x;
v=y;
    struct Divisao resposta;


if (u==v || v==0)
    {mdc1=u;
    mdc2=u;
    goto end;}
if (u==0)
    {mdc1=v;
     mdc2=v;
     goto end;}
if ((u%2)==0 && (v%2)!=0)
   {
       mdc1=u/2;
       mdc2=v;
       goto end;
   }
   if ((v%2)==0 && (u%2)!=0)
   {
       mdc1=u;
       mdc2=v/2;
       goto end;
   }
   if ((u%2)==0 && (v%2)==0)
   {
       mdc1=u/2;
       mdc2=v/2;
       goto end;;
   }
if (u>v)
   {
       mdc1=(u-v)/2;
       mdc2=v;
       goto end;;
   }
goto end2;




end2:
    mdc1=(v-u)/2;
    mdc2=u;
    goto end;


    end:

printf("Resp:  %d  / %d ", (x/mdc1), (y/mdc2));
        }

int main ()  {
    struct Divisao resposta;
    int a,b,c,d,x,y;
printf("Entre com Numerador 1 e denominador 1\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Entre com Numerador 2 e denominador 2\n");
scanf("%d",&c);
scanf("%d",&d);
resposta=dividir(a,b,c,d);


x=resposta.num;
y=resposta.den;

funcao(x,y);




return 0;
}
