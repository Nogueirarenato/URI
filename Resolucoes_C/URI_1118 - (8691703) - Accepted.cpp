#include <stdio.h>

int main ()
{float a, b, soma,media;
 int cont, novo;
cont=0;
soma=0;
novo=1;
while(novo==1){
while(cont!=2)
{
scanf("%f", &a);

if(a>10 || a<0)printf("nota invalida\n");
else{cont++;
	soma=soma+a;}}

media=soma/2;
printf("media = %.2f\n", media);



novo=0;
while(novo!=1 && novo!=2)
{
printf("novo calculo (1-sim 2-nao)\n");
scanf("%d", &novo);}
cont=0;
soma=0;
}






return (0);
}
