#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main ()
{

    int cont, estancias, tamanho,cont2;
    char a[60];
    cont=0;
    gets(a);
    estancias=atoi(a);

    while(cont<estancias){

    gets(a);
    tamanho=strlen(a)-1;
    if(a[0]!=' ')printf("%c", a[0]);
    cont2=1;
    while(cont2<=tamanho){

    if(a[cont2]!=' '&& a[cont2-1]==' ')printf("%c",a[cont2]);
    cont2++;

    }

    printf("\n");
    cont++;
    }





return(0);
}
