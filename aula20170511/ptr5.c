#include <stdio.h>
#include <stdlib.h>
#define N 1000
#include <time.h>
int main () {

srand(time(NULL));
unsigned char *p; //byte
int vetor [N],i,num,ct=0;

for (i=0;i < N ; i++)
    vetor[i]=rand();


p= (unsigned char *) &(vetor[0]);

printf(" \n Escolha numero dentro do intervalo [0,255] : ");
scanf ( "%d", &num);

for ( i=0; i< sizeof (vetor) ; i++)
if (p[i] ==num)
{

    ct++;
    printf (" Em %p, temos %d\n" , p+1, p[i]);

}
    printf ("%d bytes com %d entre %p e %p\n", ct, num, p, p+sizeof(vetor));










return 0;

}