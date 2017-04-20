#include <stdio.h>
#include <time.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}




int main () {


srand(time(0));

int x=7,D[3],i,R=0;

for (i=0; i<3 ;i++){
    D[i]=rand()%x;
    R+=D[i];
    }

    for (i=0;i<3;i++){
printf("\nDado %d = %d",i+1,D[i]);
    }
    printf("\nSoma = %d", R);

    if (R==7 || R==11)
    printf("\nO Jogador venceu");
else
    printf("\nO Jogador perdeu");




return 0;
}