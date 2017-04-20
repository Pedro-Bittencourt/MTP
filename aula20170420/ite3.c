#include <stdio.h>


void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

char palavra[256];
int i;

printf("Digite uma palavra ae : ");
scanf("%s", &palavra);

for (i=0; palavra[i]!='\0' ; i++);

printf ("   \n\nA palavra digitada tem %d caracteres", i);

return 0;}