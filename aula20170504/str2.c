#include <stdio.h>
#include <stdlib.h>




int main () {
srand(time(0));
int i,x=1;
char frase[100],ff[20];


printf("Frase : ");
fgets(frase,100,stdin);

ff[0]=frase[0];
for (i=0;frase[i]!='\0';i++)
{

    if (frase[i]==' '){
        ff[x]=frase[i+1];
        x++;}
}


printf("%s",ff);


return 0;
}
