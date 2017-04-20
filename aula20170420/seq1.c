Seq1



#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

float Ladquad;
float Aquad;


printf("\tSEQ - 1\n\nDigite lado do quadrado : ");
scanf ("%f",&Ladquad);
safeFlush();
Aquad=Ladquad*Ladquad;
printf ("Area do seu quadrado e': %g", Aquad);




return 0;}


