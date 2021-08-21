#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int cont, estancias, n, posicao;
    char p[12000], j[50];
    cont=0;
    gets(j);
    estancias=atoi(j);

    while(cont<estancias){

    gets(p);

   n=0;
   posicao=0;

   while(n<=11)

{
    if (p[posicao]==' '){posicao++;}

    else{
            if(p[posicao]=='G'||p[posicao]=='Q'||p[posicao]=='a'||p[posicao]=='k'||p[posicao]=='u'){printf("0");posicao++;n++;continue;}
            if(p[posicao]=='I'||p[posicao]=='S'||p[posicao]=='b'||p[posicao]=='l'||p[posicao]=='v'){printf("1");posicao++;n++;continue;}
            if(p[posicao]=='E'||p[posicao]=='O'||p[posicao]=='Y'||p[posicao]=='c'||p[posicao]=='m'||p[posicao]=='w'){printf("2");posicao++;n++;continue;}
            if(p[posicao]=='F'||p[posicao]=='P'||p[posicao]=='Z'||p[posicao]=='d'||p[posicao]=='n'||p[posicao]=='x'){printf("3");posicao++;n++;continue;}
            if(p[posicao]=='J'||p[posicao]=='T'||p[posicao]=='e'||p[posicao]=='o'||p[posicao]=='y'){printf("4");posicao++;n++;continue;}
            if(p[posicao]=='D'||p[posicao]=='N'||p[posicao]=='X'||p[posicao]=='f'||p[posicao]=='p'||p[posicao]=='z'){printf("5");posicao++;n++;continue;}
            if(p[posicao]=='A'||p[posicao]=='K'||p[posicao]=='U'||p[posicao]=='g'||p[posicao]=='q'){printf("6");posicao++;n++;continue;}
            if(p[posicao]=='C'||p[posicao]=='M'||p[posicao]=='W'||p[posicao]=='h'||p[posicao]=='r'){printf("7");posicao++;n++;continue;}
            if(p[posicao]=='B'||p[posicao]=='L'||p[posicao]=='V'||p[posicao]=='i'||p[posicao]=='s'){printf("8");posicao++;n++;continue;}
            if(p[posicao]=='H'||p[posicao]=='R'||p[posicao]=='j'||p[posicao]=='t'){printf("9");posicao++;n++;continue;}







    }





}




    printf("\n");
    cont++;
    }









return 0;

}
