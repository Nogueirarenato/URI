#include <stdio.h>
int main ()
{ int a,b,c,d,e,soma;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
soma=0;

if(a%2==0)soma++;
if(b%2==0)soma++;
if(c%2==0)soma++;
if(d%2==0)soma++;
if(e%2==0)soma++;

printf("%d valores pares\n", soma);




return(0);
}
