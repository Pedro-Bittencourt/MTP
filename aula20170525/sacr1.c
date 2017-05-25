#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado[6];

void Dado ()
{
    int i=0;
    char* enter;
    do {
    printf(" \n Enter para jogar ");
    fgets(enter,2,stdin);
    if(enter!='\n')
    {
        dado[i]=rand()%7;
        printf("\n Valor %d, na jogada %d", dado[i],i+1);

    }
    i++;

    }while(i<5);


}


int main () {

int ganho=0,perda=0,x=1;

do{
Dado();
if (dado[0]+dado[1]+dado[2]+dado[3]+dado[4]+dado[5]>=18 && dado[0]+dado[1]+dado[2]+dado[3]+dado[4]+dado[5]<=23)
{
    ganho++;
    printf("\n\n\n------Voce ganhou a %d partida------\n\n",x);

}
else
     {
         printf("\n\n\n------Voce perdeu a %d partida------\n\n",x);
          perda++;
     }


x++;
} while (x<4);
ganho--;

printf("\n\n\n ------Fim de jogo : Voce acertou em %d / 3 partidas------\n\n\n",ganho);




return 0;
}