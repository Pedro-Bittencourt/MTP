#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}


float Delta (int a, int b, int c)
{
    float delta;
    delta=(b*b)-(4*a*c);
    return delta;
}

void Raizes (float delta,int a,int b){
float raiz[2],I[2],p1,p2,p3;
int d;


if (delta>0)
    d=1;
if (delta=0)
    d=0;
if (delta<0)
    d=-1;

switch (d)
{
case 1:
    p1=(-1)*b;
    p2=sqrt(delta);
    p3=2*a;
    raiz[0]=  (p1+p2) / p3;
    raiz[1]=  (p1-p2) / p3;
    printf("\n\n Raiz 1 = %f , Raiz 2 = %f ",raiz[0],raiz[1]);
    break;
case 0:
    raiz[0]=raiz[1]=(-b/(2*a));
    printf("\n\n Raiz 1 = %f " , raiz[0]);
    break;
case -1:
raiz[0]=(-b)/(2*a);
I[0]=(sqrt(delta)/(2*a));
raiz[1]=(-b)/(2*a);
I[1]=(sqrt(delta)/(2*a));
printf("\n\n Raiz 1 = %f + I* %f, Raiz 2 = %f - I* %f ",raiz[0],I[0],raiz[1],I[1]);
break;

}

}


int main () {
int a, b, c;
float delta;
printf("\nDigite a da funcao: \n");
scanf("%d",&a);
printf("\nDigite b da funcao: \n");
scanf("%d",&b);
printf("\nDigite c da funcao: \n");
scanf("%d",&c);

delta=Delta(a,b,c);
printf(" \n Delta : %f ",delta);
Raizes(delta,a,b);


return 0;
}