#include <stdio.h>

int main ()
{ float a, b,soma,cont;
a=1;
soma=0;
cont=0;
while(a>=0)
{scanf("%f", &a);
if(a>=0){
soma=soma+a;
cont++;
}}
a=soma/cont;

printf("%.2f\n", a);

return(0);
}
