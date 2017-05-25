#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}


int Sorteio ()
{
   char* enter;
int ac,x=0,sorteado;
int numero;

do{
printf("\n\n------ Escolha um novo numero ------\n");
scanf("%d",&numero);
safeFlush();
printf("\nEnter para sortear\n ");
 fgets(enter,2,stdin);


    if(enter!='\n')
        {
        sorteado=rand()%10;
        sorteado++;

        if(sorteado==numero){
            printf("\n>>>>PARABENS! O sorteador acertou seu numero<<<<<\n\n");
            ac++;
        }

        else
            printf("\n>>>>>O sorteador errou seu numero<<<<<\n\n");
        }
        x++;
}while(x<11);

return sorteado;
}


int main () {

Sorteio();




return 0;
}
