#include <stdio.h>

int main(){

int tamanho, aux, aux1, cont, aux2;

while(scanf("%d", &tamanho)!=EOF){

aux=(tamanho/2);
//printf("auxiliar= %d\n",aux);
aux2=aux;
aux1=1;
cont=0;

while(aux1<=tamanho)
{
    while(cont<aux2){
    printf(" ");
    cont++;
    }
    cont=0;
    while(cont<aux1){
    printf("*");
    cont++;
    }
    printf("\n");
aux1=aux1+2;
aux2--;
cont=0;
}

aux2=(tamanho/2);
cont=0;
while(cont<aux2){
    printf(" ");
    cont++;
    }
printf("*\n");

cont=0;
while(cont<aux2-1){
    printf(" ");
    cont++;
    }
printf("***\n");



printf("\n");

}

return(0);
}
