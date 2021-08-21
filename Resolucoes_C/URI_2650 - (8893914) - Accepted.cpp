#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int estancias, cont, altura, alturatitan, tamanho, soma, mult, equi, cont2;
    char nome[250], c;

    cont=0;
    scanf("%d %d", &estancias, &altura);

    while(cont<estancias){

    while(c!='\n')
    {
        scanf("%c", &c);
    }
    gets(nome);
   // printf("cont= %d  estancias =%d\n", cont, estancias);
    tamanho=strlen(nome)-1;
    //printf("nooooome= %s tamanho total=%d\n", nome, tamanho);
    soma=0;
    mult=1;
    while(nome[tamanho]!=' ')
    {
        if(nome[tamanho]=='0')equi=0;
        if(nome[tamanho]=='1')equi=1;
        if(nome[tamanho]=='2')equi=2;
        if(nome[tamanho]=='3')equi=3;
        if(nome[tamanho]=='4')equi=4;
        if(nome[tamanho]=='5')equi=5;
        if(nome[tamanho]=='6')equi=6;
        if(nome[tamanho]=='7')equi=7;
        if(nome[tamanho]=='8')equi=8;
        if(nome[tamanho]=='9')equi=9;


        soma=soma+mult*equi;
        mult=mult*10;
        //printf("soma= %d tamanho=%d\n", soma, tamanho);
        tamanho--;

    }

    //printf("soma=%d       tamanho do muro=%d\n", soma, altura);

    cont2=0;
    if(soma>altura){

            while(cont2<tamanho)
            {
                printf("%c", nome[cont2]);
                cont2++;

            }printf("\n");}


    cont++;
    }




return(0);

}

