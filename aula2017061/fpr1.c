#include <stdio.h>
#include <stdlib.h>




void  dividir (int *pa,int*pb,int*pquo,int*presto)
{
*pquo= (*pa)/(*pb);
*presto = (*pa)%(*pb);

}


int main () {

int dividendo, divisor , quo, resto;
printf ( "Dividendo \n");
scanf ("%d", &dividendo);
printf ( "Divisor \n");
scanf ("%d", &divisor);
dividir (&dividendo, &divisor,&quo,&resto);
printf ("Resp : %d com resto %d\n",quo,resto);
return 0;


}




















































voi