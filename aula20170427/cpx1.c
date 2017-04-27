#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

double complex Z,A,B;
double rA,rB,iA,iB;

printf ("Entre com A real : ");
scanf ("%lf",&rA);

printf ("Entre com A imag. : ");
scanf ("%lf",&iA);

printf ("Entre com B real : ");
scanf ("%lf",&rB);

printf ("Entre com B imag. : ");
scanf ("%lf",&iB);

A =rA + I*iA;
B =rB + I*iB;
Z=A=B;
printf("\nSoma : %lf +I*%lf", creal(Z),cimag(Z));




return 0;}