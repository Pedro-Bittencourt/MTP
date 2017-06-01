#include <stdio.h>
#include <stdlib.h>

struct Divisao {
int quo, resto;



};

struct Divisao dividir (int a, int b){
struct Divisao resposta;
resposta.quo= a/b;
resposta.resto=a%b;

return resposta;
};


int main ()  {
    struct Divisao resposta;
    int dividendo,divisor;
printf("Entre com dividendo e divisor");
scanf("%d",&dividendo);
printf("Entre com  divisor");
scanf("%d",&divisor);
resposta=dividir(dividendo,divisor);
printf("resposta : %d com resto %d",resposta.quo,resposta.resto);



return 0;
}
