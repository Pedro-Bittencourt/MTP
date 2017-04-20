#include <stdio.h>


void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

int i,n;


printf("Digite numero inteiro : ");
scanf("%d",&n);

for(i=1; n>1; i*=n, n--);
printf("O fatorial e' %d\n",i);



return 0;}