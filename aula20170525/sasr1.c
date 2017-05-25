#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Respostas() {
int id = rand()%9;

switch (id) {

case 0:printf("topper\n");   break;
case 1:printf("nice\n");   break;
case 2:printf("Ok\n");   break;
case 3:printf("ydfgjsragfsrdghs (risos)\n");   break;
case 4:printf("deus esta morto\n");   break;
case 5:printf("vai todo mundo morre\n");   break;
case 6:printf("Não\n");   break;
case 7:printf("Sim\n");   break;
case 8:printf("Depende de vc\n");   break;
}
}

int main () {
srand(time(NULL));
char frase [256];
printf(" Diga algo humano/alienigina/besouro\n");
do{
    fgets(frase,256,stdin);
    Respostas();
}while(frase[0] != '\n');
printf("Vai embora :D");

return 0;
}
