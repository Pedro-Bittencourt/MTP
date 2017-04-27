#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {




float x1,x2,y1,y2,res;


printf ("Coord. x de P1 : ");
scanf("%f" , &x1);


printf ("\nCoord. y de P1 : ");
scanf("%f", &y1);



printf ("\nCoord. x de P2 : ");
scanf("%f" , &x2);



printf ("\nCoord. y de P2 : ");
scanf("%f", &y2);



res=sqrt ( pow(x2-x1,2) + pow (y2-y1,2) );

printf ("\nDistancia entre P1 e P2 : %f \n\n", res);








return 0;
}



