#include <stdio.h>

int main ()
{float a, b, soma,media;
 int cont;
cont=0;
soma=0;
while(cont!=2)
{
scanf("%f", &a);

if(a>10 || a<0)printf("nota invalida\n");
else{cont++;
	soma=soma+a;}}

media=soma/2;
printf("media = %.2f\n", media);
return (0);
}
