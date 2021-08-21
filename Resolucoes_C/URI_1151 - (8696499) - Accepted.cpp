#include <stdio.h>

int main ()
{unsigned long long int a, cont, a0, a1,a2;

scanf("%llu", &a);
a0=0;
a1=1;
a2=1;
if (a==1){printf("%llu\n", a0);}
if (a==2){printf("%llu ", a0);
printf("%llu\n", a1);}
if(a==3){printf("%llu ", a0);
printf("%llu ", a1);
printf("%llu\n", a2);}

if(a>3){
cont=4;
printf("%llu ", a0);
printf("%llu ", a1);
printf("%llu ", a2);
while(cont<=a)
{
    cont++;
    a0=a1+a2;
    a1=a2;
    a2=a0;
if(cont<a)printf("%llu ", a2);
}
printf("%llu ", a1);
printf("%llu\n", a2);
}

return(0);
}

