#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main () {

char frase[NCHAR];
int i;
printf("Digite uma frase :");
fgets (frase,NCHAR,stdin);

for (i=0; frase[i]!='\0';i++)
frase[i]=tolower(frase[i]);
printf ("Frase minusculada : \n%s",frase);






return 0;
}
