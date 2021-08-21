#include <stdio.h>

int main ()
{int a,b,c,d,e,cont,cont1,soma;
cont=0;
scanf("%d", &a);

while(cont<a){


scanf("%d %d",&b, &c);

if(b<=c){d=b; e=c;}
else {d=c; e=b;}

if(d%2!=0)d++;
soma=0;
while(d<e)
{
  if(d%2==1)soma=soma+d;
  d++;
}

    printf("%d\n", soma);


    cont++;
}

return(0);
}
