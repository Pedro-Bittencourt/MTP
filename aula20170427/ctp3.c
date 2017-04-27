#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main () {

char frase[NCHAR];
int i,c=0;
printf("Digite uma frase :");
fgets (frase,NCHAR,stdin);

for (i=0; frase[i]!='\0';i++)
{
    if (isalpha (frase[i]) )
        c++;
}
printf ("Caracteres utilizados : %i",c);



return 0;
}