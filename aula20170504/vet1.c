#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main() {
srand(time(0));
int i,max;
int num[N];
float md;

printf("valor natural maximo : ");
scanf ("%d", &max);
for(i=0;i<N;i++)
num[i]=rand()%max +1 ;
md=0.0;
for(i=0; i<N;i++)
md=md+num[i];
md=md/N;
printf("Media : %g.\n", md);
return 0;
}