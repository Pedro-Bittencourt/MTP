#include <stdio.h>
#include <stdlib.h>
#define N 256



int main () {

int i,x,p;
char frase [N],cifra[N];



printf("Frase : ");
fgets(frase,100,stdin);

frase[strlen(frase)-1] = '\0';

for (i=0;i<N;i++)  {

    if (isalpha(frase[i])) {
     if ((frase[i] >= 'A' && frase[i] < 'N') || (frase[i] >= 'a' && frase[i] < 'n' ))
        cifra[i]=frase[i] +13;
     else
        cifra[i] = frase[i] - 13;
    }
    else
        cifra[i]=frase[i];
}
printf("Msg : \n %s", cifra);







return 0;
}