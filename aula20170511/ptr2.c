#include <stdio.h>
#include <stdlib.h>

int main () {
int i,ct=0;
 int vetor[] = {0,1,2,4,8};

unsigned char *p; //byte


p= vetor;
for (i=0; i<sizeof(vetor); i++) {
if (*(p+i)==0)
    ct++;
printf ("\nContem : %u ou %x ou %c\n", p[i] , p[i] , p[i]);
}

printf (" Contagem : %i " , ct);
return 0;
}
