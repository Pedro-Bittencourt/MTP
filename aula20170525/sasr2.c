#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Par (int x)
{
    int i;
    printf(" \n Pares : ");
    for (i=0;i<=x;i++)
    {
        if(i%2==0)
            printf(" %d, ",i);

    }

}

void Impar (int x) {
int i;
printf(" \n Impares : ");
 for (i=0;i<=x;i++)
    {
        if(i%2!=0)
            printf(" %d, ",i);

    }

}

int main () {

int x;
printf ("Digite um numero");
scanf("%d",&x);
Par(x);
Impar(x);

return 0;
}
