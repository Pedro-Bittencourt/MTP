#include <stdio.h>
#include <stdlib.h>

int main () {


int *p; //byte
int i;
char vetor [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ;
p= (int *) vetor;
printf ("Info textual :  ");
fgets (vetor,16,stdin);

for (i=0;i < (sizeof(vetor)/4 ); i++)
printf("%i ", p[i]);

printf("\n\n(hex)");

for (i=0;i < (sizeof(vetor)/4); i++)
  printf("%u ", p[i]);

return 0;
}