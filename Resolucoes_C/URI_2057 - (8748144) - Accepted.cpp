#include <stdio.h>
#include <math.h>

int main ()

{ int saida, duracao, fuso, d;


scanf("%d %d %d", &saida, &duracao, &fuso);

d=saida+duracao;

if(d>=24)d=d-24;

d=d+fuso;
if(d>=24)d=d-24;
if(d<0)d=24+d;

printf("%d\n", d);



return(0);
}
