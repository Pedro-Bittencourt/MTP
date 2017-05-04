#include <stdio.h>
#include <time.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {


srand(time(0));

int x=10,y,n,r;


printf("Digite um numero inteiro n-negativo : ");
scanf("%d",&n);

y=rand()%x;

r=n+y;

printf("\n Seu numero  : %d \nNumero sorteado : %d\n",n,y);

if (r%2==0)
    printf("\nPar");
if (r%2!=0)
    printf("\nImPar");




return 0;}
