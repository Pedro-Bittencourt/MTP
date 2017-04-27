#include <stdio.h>
#include <stdlib.h>
#include <complex.h>





int main () {

double complex Z;
double rA,iA;

printf ("Entre com parte real : ");
scanf ("%lf",&rA);

printf ("Entre com parte imag. : ");
scanf ("%lf",&iA);


Z =rA*rA + (iA*(-iA))*I;

printf("\nResultado : %lf +I*%lf", creal(Z),cimag(Z));



return 0;}
