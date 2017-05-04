#include <stdio.h>
#include <stdlib.h>
#define N 10

int main () {

int i,x=0;
int num[N],inv[N];



for (i=0;i<N;i++)  {
printf("\nDigite valor da posicao %d :  ",i+1);

scanf("%d",&num[i]);

}

for (i=N-1;i>=0;i--)
{
    inv[x]=num[i];
    x++;
}

   printf (" Veto inverso : ");

for (i=0;i<N;i++)  {
printf("Vetor posicao %d : %d \n",i+1,inv[i]);
}




return 0;
}