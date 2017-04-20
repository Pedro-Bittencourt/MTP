#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

float nota[5], Md;
int i;

printf ("\tSEQ - 3 \n\nMedia de notas\n\n Digite as notas");

for(i=0;i<5;i++) {
        dnv:
printf (" \n Nota %d : ", i+1);
scanf("%f",&nota[i]);
safeFlush();

if(nota[i]>10 || nota[i]<0){
    printf("\n Nota invalida");
    goto dnv;
}



}

Md= (nota[0]*2 + nota[1]*2 + nota[2]*2 + nota[3]*3 + nota[4]*5) / 14 ;

printf ("\nMedia : %g ",Md);



return 0;}
