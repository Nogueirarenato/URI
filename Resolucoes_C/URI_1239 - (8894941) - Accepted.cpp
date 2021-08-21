#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{ int abrenegrito, fechanegrito, abreitalico, fechaitalico, tamanho,cont;
   char palavra[250];


 while(gets(palavra)!=NULL ){

abrenegrito=1;
abreitalico=1;
fechanegrito=0;
fechaitalico=0;
cont=0;


tamanho=strlen(palavra)-1;
//printf("%d\n", tamanho);

    while(cont<=tamanho){


    if((palavra[cont]==42)||(palavra[cont]==95)){

    if(palavra[cont]==42){

                        if(abrenegrito==1){
                          printf("<b>");
                          abrenegrito=0;
                          fechanegrito=1;
                        }
                        else {

                            printf("</b>");
                            abrenegrito=1;
                            fechanegrito=0;
                        }


    }

    if(palavra[cont]==95){

                        if(abreitalico==1){
                          printf("<i>");
                          abreitalico=0;
                          fechaitalico=1;
                        }
                        else {

                            printf("</i>");
                            abreitalico=1;
                            fechaitalico=0;
                        }




    }




    }


    else {printf("%c", palavra[cont]);}


    cont++;

    }


printf("\n");
 }
    return(0);
}
