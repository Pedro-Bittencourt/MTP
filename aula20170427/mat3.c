#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {




float b,n,l;


printf("Digite uma base : ");
scanf("%f",&b);

printf("Digite um numero : ");
scanf("%f",&n);

l= ( log(n) / log(b));

printf("\nOvalor log e' : %f", l);




return 0;
}