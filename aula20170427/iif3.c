#include <stdio.h>
#include <stdlib.h>


void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {


unsigned long long int i,n;


printf("Digite numero inteiro : ");
scanf("%llu",&n);



for(i=1; n>1; i*=n, n--);
printf("O fatorial e' %llu\n",i);



return 0;}
