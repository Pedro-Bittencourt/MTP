#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {


int nmr;

printf ("\tDEC - 1  \n\nDigite um numero : ");
scanf("%d",&nmr);
safeFlush();

if (nmr%2==0)
    printf("\nO numero e' par!!!!\n");
else
    printf("\nO numero e' impar!!!\n");


if (nmr%3==0)
    printf("\nMultiplo de 3");

if (nmr%5==0)
    printf("\nMultiplo de 5");

if (nmr%7==0)
    printf("\nMultiplo de 7");




return 0;}
