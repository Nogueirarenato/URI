#include <stdio.h>

int main ()
{ int impar, par, positivo, negativo, a, b, c, d, e;

scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

impar=par=positivo=negativo=0;

if (a%2==0) par++;
if (a%2!=0) impar++;
if (a>0) positivo++;
if (a<0) negativo++;

if (b%2==0) par++;
if (b%2!=0) impar++;
if (b>0) positivo++;
if (b<0) negativo++;

if (c%2==0) par++;
if (c%2!=0) impar++;
if (c>0) positivo++;
if (c<0) negativo++;

if (d%2==0) par++;
if (d%2!=0) impar++;
if (d>0) positivo++;
if (d<0) negativo++;

if (e%2==0) par++;
if (e%2!=0) impar++;
if (e>0) positivo++;
if (e<0) negativo++;

printf("%d valor(es) par(es)\n", par);
printf("%d valor(es) impar(es)\n", impar);
printf("%d valor(es) positivo(s)\n", positivo);
printf("%d valor(es) negativo(s)\n", negativo);


return(0);


}
