#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{   double soma, cont, distancia;
    char nome[5000];
    soma=0;
    cont=0;
    while(gets(nome)!=NULL){

    scanf("%lf", &distancia);
    soma=soma+distancia;
    
    cont++;
    }
printf("%.1lf\n", (soma+distancia)/(cont+1));


return (0);
}
