#include <stdio.h>
#include <stdlib.h>

int main () {
int x=1,y=2,soma;
int *p;
int *s;
p=&x;
s=&y;

printf (" Endereco de x: %p , Valor de x : %u\n", &x, x);
printf (" Endereco de y: %p , Valor de y : %u\n", &y, y);

soma=x+y;

printf (" Endereco de x+y: %p , Valor de x+y : %u\n", &soma, soma);


return 0;
}