#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

srand(time(0));

int i,c=0,x=101;
float ng,ni;

printf("Digite uma probabilidade : ");
scanf("%f",&ni);

if (ni>0 && ni<1)
    ni*=100;

    printf("\n %f ", ni);

for (i=0;i<=100;i++)
{
    ng=rand()%x;

    if (ng<=ni)
        c++;


}

printf ("\nVezes em que sua probabilidade foi menor ou igual as probabilidades geradas : %i ", c);


return 0;
}