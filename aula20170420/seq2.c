#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {

float base,altura,area;


printf ("\tSEQ - 2 \n\nArea Paralelogramo \n\n Base : ");
scanf("%f",&base);
safeFlush();
printf ("\nAltura : ");
scanf("%f",&altura);
safeFlush();
area=base*altura;
printf ("\nArea do paralelogramo de base = %g e altura = %g , tem area = %g", base,altura,area);

return 0;}
