#include<stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct Ponto { float x, y, z; }
Ponto;


#define N 1000
#define FRAND(min,max) \
(min + (max-min) * rand()/(float)RAND_MAX )




int main(){

    srand(time(NULL));
    int i,numpontos;
    Ponto pontos[N];
    float medx=0.0 , medy = 0.0 , medz=0.0;

    for ( i=0;i < N;i++)
    {
      pontos[i].x = FRAND (-10.0,10.0);
      pontos[i].y = FRAND (-10.0,10.0);
      pontos[i].z = FRAND (-10.0,10.0);


    }
    printf("\n Escolha um numero entre 10 e 1000");
    scanf ("%d",&numpontos);


    for (i = 0 ; i< numpontos ;i++)
    {

        medx += pontos [i].x;
         medy += pontos [i].y;
          medz += pontos [i].z;





    }

printf("\n Centro de massa : (%f , %f , %f)\n", medx/numpontos , medy/numpontos , medz/numpontos );





return 0;
}
