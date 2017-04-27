include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {




float B,C,A,ang;


printf("Digite o lado B : ");
scanf("%f",&B);

printf("Digite o lado C : ");
scanf("%f",&C);

printf("Digite o Angulo entre C e B : ");
scanf("%f",&ang);

A=sqrt(pow (B,2) + pow(C,2) - 2*B*C*cos(ang));


printf("\nValor de A : %f", A);







return 0;