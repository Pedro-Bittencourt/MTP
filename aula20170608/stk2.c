#include <stdio.h>
#include <stdlib.h>
#include <math.h>






float M (float* num ) {
    int i;
    float m=0.f;
    for (i=0;i<5;i++){
        m+=num[i];
    }
return m/5.f;
}
float Desv (float* num , float m)
{
    int i;
    float desv=0.f;

    for(i=0;i<5;i++) {
    desv=desv+ pow((num[i]-m),2);
    }
    return sqrt(desv/4.f);
}

int main () {
    float num[5];
    float m,desv;
    int i;

    for(i=0;i<5;i++){
        printf("Entre com um numero : ");
        scanf("%f",&num[i]);
    }
    m=M(num);
    desv=Desv(num ,m);
    printf("\n Media : %f  ,  Desvio : %f", m,desv);
    return 0;
}