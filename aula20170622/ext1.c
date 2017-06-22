#include <stdio.h>
#include <stdlib.h>

void mostrar (float *numeros, int qtde) {
int i; printf("Numeros:");
for (i=0;i<qtde;i++)
printf("%f%c", numeros[i],(i == qtde-1)?'\n': ';');

}

float media (float * numeros, int qtde) {
int i; float m = 0.f;
for (i=0; i<qtde; i++)
m+=numeros[i];
return m/qtde;
}

float maior (float *numeros, int qtde) {
int i; float max=numeros[0];
for(i=1; i<qtde; i++)
if(numeros[i]>max) max=numeros[i];
return max;
}

float menor (float *numeros, int qtde) {
int i; float min=numeros[0];
for(i=1; i<qtde; i++)
if(numeros[i]>min) min=numeros[i];
return min;
}

int main () {
float * numeros = NULL;
int qtde=0; int opc;
do {
qtde++;
numeros = (float *) realloc (numeros,qtde*sizeof(float));
printf ("Digite numero: ");
scanf ("%f", numeros+(qtde-1)); getchar ();
mostrar (numeros,qtde);
printf("Media : %f\n",media(numeros,qtde));
printf("Maior : %f\n",maior(numeros,qtde));
printf("Menor: %f\n",menor(numeros,qtde));
printf("Continue? : (0-nao,1-sim)\n" ,media(numeros,qtde));
scanf("%d",&opc); getchar();
}while(opc);
free(numeros);

return 0;
}
