#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ** criar (int ordem) {
    int i;
    float ** matriz=NULL;
matriz = (float **) calloc (ordem,sizeof(float*));
for ( i=0; i< ordem; i++)
    matriz[i] = calloc (ordem ,sizeof (float));
return matriz;
}

void ** destroy (float **M,int ordem) {
    int i;

for ( i=0; i< ordem; i++)
   free(M[i]);
   free(M);

}

void preenche (float **M,int ordem) {
    int j,i;

for ( i=0; i< ordem; i++)
    for (j=0;j<ordem;j++){
            printf("[%d][%d]",i,j);
    scanf("%f",&M[i][j]);
}

}


float ** cofator ( float ** M, int ordem, int I, int J) {

float ** C=criar (ordem -1);
int i,j,r,s;
for (r= 0,i=0; i< ordem-1;i++ )
{
    if (i != I) {
        for (j=0,s=0;j<ordem;j++) {
                if (j!= J) {

                C[r][s]=M[i][j];
                s++;
                }

        }

    r++;
    }


}
return C;
}


float det (float ** M, int ordem)  {
int i,j; float soma=0.f;
float **C=NULL;
if (ordem==1) return M[0][0];

if (ordem==2)  return M[0][0]*M[1][1]-M[0][1]*M[1][0];

if (ordem==3)  return M[0][0]*M[1][1]*M[2][2]+M[0][1]*M[1][2]*M[2][0]+M[1][0]*M[2][1]*M[0][2]-M[0][2]*M[1][1]*M[2][0]-M[0][1]*M[1][0]*M[2][2]-M[0][0]*M[1][2]*M[2][1];

    i=0; //arbitrario.
    for (j=0;j<ordem;j++){
        C=cofator(M,ordem,i,j);

    soma +=pow(-1,i+j)*M[i][j]*det(C,ordem-1);
    destroy(C,ordem-1);
    }
    return soma;
}

int main ()
{
    int ordem;
    float **Matriz=NULL;
    printf("Ordem :");
    scanf ("%d",&ordem);
    Matriz=criar(ordem);
    preenche(Matriz,ordem);
    printf("Determinante : %g\n", det (Matriz,ordem));
    destroy(Matriz,ordem);


    return 0;
}
