#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>

int main () {
srand(time(0));
int i,x,max,min;



printf("numero inteiro não negativo entre 1 e 1000 : ");
scanf("%d",&x);

int num[x];

for (i=0;i<x;i++)  {
num[i]=rand()%10;

}
   min=num[0];
    max=num[0];

for (i=0;i<x-1;i++)
{


    if ( num[i]>max)
        max=num[i++];


    if ( num[i]<min)
        min=num[i++];
}



   printf (" \n Max : %d ",max);
    printf (" \n Min : %d \n\n ",min);



for (i=0;i<x;i++)
    printf("%d ", num[i]);


return 0;
}