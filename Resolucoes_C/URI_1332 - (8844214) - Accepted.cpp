#include <stdio.h>
#include <string.h>


int main ()
{ char palavra[60];
  int estancias, cont, tamanho,posi;
cont=0;

scanf("%d", &estancias);
while(cont<estancias){


scanf("%s", &palavra);
tamanho=strlen(palavra);

if(tamanho==5)printf("3\n");

else{
    posi=0;
    if(palavra[0]=='t')posi++;

    if(palavra[1]=='w')posi++;

    if(palavra[2]=='o')posi++;


    if(posi<=1)printf("1\n");
    else printf ("2\n");
}



    cont++;
}





return(0);
}
