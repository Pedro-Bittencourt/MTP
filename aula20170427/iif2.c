#include <stdio.h>
#include <stdlib.h>

int main ()  {

int num,i;
float inv,res=0;
double invd,resd=0;





printf ("Digite um numero inteiro : ");
scanf ("%i",&num);

inv=1.0/num;
invd=1.0/num;


for (i=0;i<729;i++)
res+=inv;


for (i=0;i<729;i++)
resd+=invd;

printf (" Resultado com float : %.15g \n Resultado com double : %.15g " , res,resd);







return 0;
}