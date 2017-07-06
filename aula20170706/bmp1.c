#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int Dword;

typedef
struct RGB {Byte B,G,R; }
RGB;



int main () {

FILE * arquivo;
RGB pixel;
Byte byte; Word word; Dword dword;
int WPX,HPX,BPP, NCP,NIC,i,j,AUX,PAL;
arquivo= fopen ("LaughingMan.bmp","rb");

if(!arquivo) {
    fprintf (stderr,"Arquivo inexistente\n");
     return (EXIT_FAILURE);
}


printf("=========================\n");

fread (&byte,sizeof(Byte),1,arquivo);
printf("%c\n",byte);
fread (&byte,sizeof(Byte),1,arquivo);
printf("%c\n",byte);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Tamanho do arquivo: %d bytes\n",dword);

//fseek(arquivo,2*sizeof(Word),SEEK_CUR);

fread (&word,sizeof(Word),1,arquivo);
printf("Info reserved: %d \n",word);
fread (&word,sizeof(Word),1,arquivo);
printf("Info reserved: %d \n",word);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Offset: %d bytes \n",dword);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Cabecalho: %d bytes \n",dword);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Largura: %d pixels \n",dword);
WPX= dword; //largura
fread (&dword,sizeof(Dword),1,arquivo);
printf("Altura: %d pixels \n",dword);
HPX= dword; //Altura
fread (&word,sizeof(Word),1,arquivo);
printf("Plano de cores: %d \n",word);
fread (&word,sizeof(Word),1,arquivo);
printf("Bits por pixel: %d \n",word);
BPP= word;
fread (&dword,sizeof(Dword),1,arquivo);
printf("Compressao: %d  \n",dword);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Tamanho imagem: %d bytes \n",dword);

fread (&dword,sizeof(Dword),1,arquivo);
printf("Resolu��o horizontal: %d bytes \n",dword);
fread (&dword,sizeof(Dword),1,arquivo);
printf("Resolu��o vertical: %d bytes \n",dword);

fread (&dword,sizeof(Dword),1,arquivo);

NCP=dword;
printf("N�mero de cores na paleta: %d  \n",(NCP==0)? 1 << BPP : NCP);

fread (&dword,sizeof(Dword),1,arquivo);
NIC=dword;

printf("N�mero de cores na paleta: %d  \n",(NIC==0)? 1 << BPP : NIC);

printf("============================\n");
PAL = floor((BPP*WPX + 31.)/32.)*4;

AUX = PAL - WPX*3;
for (j=0;j< HPX; j++){
 for(i=0;i<WPX;i++) {
    fread(&pixel,sizeof(RGB),1,arquivo);
    printf("R : %d, G : %d , B : %d\n",pixel.R,pixel.G,pixel.B);

 }
 if(AUX>0){
    fseek(arquivo,AUX,SEEK_CUR);
 }

}
fclose(arquivo);
return EXIT_SUCCESS;
}
