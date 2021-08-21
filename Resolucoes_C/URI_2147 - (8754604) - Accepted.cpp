#include <stdio.h>
#include <string.h>

int main ()
{int cont, estancias, tamanho;
char galopeira[50000];
double tempo, tamanho2;

cont=0;
scanf("%d", &estancias);

while(estancias>cont){

    scanf("%s", &galopeira);

    tamanho=strlen(galopeira);
    tamanho2=tamanho;
    tempo=tamanho2/100;

    printf("%.2f\n", tempo);





    cont++;
}


    return(0);
}
