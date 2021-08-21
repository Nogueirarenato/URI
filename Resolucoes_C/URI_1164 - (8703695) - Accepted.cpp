#include <stdio.h>

int main ()
{
int estancias, cont;
int c1, soma;



scanf("%d", &estancias);


while(estancias>0)
{
scanf("%d", &c1);
cont=1;
soma=0;
while(cont<c1)
{   if(c1%cont==0)soma=soma+cont;
    cont++;
}
if(soma==c1)printf("%d eh perfeito\n", c1);
else printf("%d nao eh perfeito\n", c1);






estancias--;
}



return(0);
}

