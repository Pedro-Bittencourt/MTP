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
FILE * arquivo2;
RGB pixel;
RGB pixel2;
Byte byte; Word word; Dword dword;
int WPX,HPX,BPP, NCP,NIC,i,j,AUX,PAL;
arquivo= fopen ("ga.bmp","rb");
arquivo2= fopen ("ga.bmp","wb");

if(!arquivo) {
    fprintf (stderr,"Arquivo inexistente\n");
     return (EXIT_FAILURE);
}


printf("=========================\n");

fread (&byte,sizeof(Byte),1,arquivo);
fwrite (&byte,sizeof(Byte),1,arquivo2);

fread (&byte,sizeof(Byte),1,arquivo);
fwrite (&byte,sizeof(Byte),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

//fseek(arquivo,2*sizeof(Word),SEEK_CUR);

fread (&word,sizeof(Word),1,arquivo);
fwrite (&word,sizeof(Word),1,arquivo2);

fread (&word,sizeof(Word),1,arquivo);
fwrite (&word,sizeof(Word),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);
WPX= dword; //largura


fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);
HPX= dword; //Altura


fread (&word,sizeof(Word),1,arquivo);
fwrite (&word,sizeof(Word),1,arquivo2);

fread (&word,sizeof(Word),1,arquivo);
BPP= word;
fwrite (&word,sizeof(Word),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);


fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);


fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

fread (&dword,sizeof(Dword),1,arquivo);
fwrite (&dword,sizeof(Dword),1,arquivo2);

NCP=dword;


fread (&dword,sizeof(Dword),1,arquivo);
NIC=dword;
fwrite (&dword,sizeof(Dword),1,arquivo2);



printf("============================\n");
PAL = floor((BPP*WPX + 31.)/32.)*4;
Byte x=0;
AUX = PAL - WPX*3;
for (j=0;j< HPX; j++){
 for(i=0;i<WPX;i++) {
    fread(&pixel,sizeof(RGB),1,arquivo);
    pixel2.B=pixel.B; pixel2.R=pixel.G; pixel2.G=pixel.R;
    fwrite (&pixel2,sizeof(RGB),1,arquivo2);

 }
 if(AUX>0){
    fseek(arquivo,AUX,SEEK_CUR);
    for (i=0;i<AUX;i++)
        fwrite(&x,sizeof(Byte),1,arquivo2);

 }
}
fclose(arquivo);
fclose(arquivo2);
printf("done");
return EXIT_SUCCESS;
}
