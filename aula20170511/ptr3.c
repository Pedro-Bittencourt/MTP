#include <stdio.h>
#include <stdlib.h>

int main () {
int i,ct=0;
 int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
unsigned char *p; //byte


p= vetor;
for (i=0; i<sizeof(vetor); i++) {
if (*(p+i)==255)
    ct++;
printf ("\nContem : %u ou %x ou %c\n", p[i] , p[i] , p[i]);
}

printf (" Contagem : %i " , ct);
return 0;
}
