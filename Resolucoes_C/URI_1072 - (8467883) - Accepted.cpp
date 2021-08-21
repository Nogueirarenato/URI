#include <stdio.h>
int main ()
{ int a,b,cont, in, out;

scanf("%d",&a);
cont=0;
in=0;
out=0;
while(cont<a)
{scanf("%d",&b);

if(b>=10 && b<=20)in++;
else out++;

cont++;
}

printf("%d in\n", in);
printf("%d out\n", out);
return(0);
}
