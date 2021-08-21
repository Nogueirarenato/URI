#include <stdio.h>
#include <math.h>

int main ()

{ float cobaias, coelhos, ratos, sapos, pcoelhos, pratos, psapos, num;
  int cont, estancias;
  char letra;

sapos=0;
ratos=0;
coelhos=0;
cobaias=0;
cont=0;
scanf("%d", &estancias);
while(cont<estancias){

    scanf("%f %c", &num, &letra);


    if(letra=='S'){sapos=sapos+num;cobaias=cobaias+num;}
    if(letra=='R'){ratos=ratos+num;cobaias=cobaias+num;}
    if(letra=='C'){coelhos=coelhos+num;cobaias=cobaias+num;}






    cont++;
}

printf("Total: %0.f cobaias\n", cobaias);
printf("Total de coelhos: %0.f\n", coelhos);
printf("Total de ratos: %0.f\n", ratos);
printf("Total de sapos: %0.f\n", sapos);
printf("Percentual de coelhos: %.2f %%\n", 100*coelhos/cobaias);
printf("Percentual de ratos: %.2f %%\n", 100*ratos/cobaias);
printf("Percentual de sapos: %.2f %%\n", 100*sapos/cobaias);






return(0);
}
