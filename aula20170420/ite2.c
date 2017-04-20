#include <stdio.h>


void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

int b,p,r=1,i;


printf("Digite numero inteiro : ");
scanf("%d",&b);
safeFlush();

printf("Digite uma potencia (numero inteiro) : ");
scanf("%d",&p);
safeFlush();

if (p==1)
    r=b;

if (p==0)
    r=1;

 if (p>1)
 {

for ( i=1 ; i<=p ; i++)
{
   r*=b;
}

 }


 printf("O resultado e' %d: ",r);




return 0;}
