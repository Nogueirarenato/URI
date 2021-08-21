#include <stdio.h>

int main ()
{unsigned long long int a, cont, a0, a1,a2, estancias;
scanf("%llu", &estancias);
while(estancias!=0){
scanf("%llu", &a);
a0=0;
a1=1;
a2=1;
if (a==1)printf("Fib(%llu) = 1\n", a);
if (a==0)printf("Fib(%llu) = 0\n", a);
if (a==2)printf("Fib(%llu) = 1\n", a);
if (a==3)printf("Fib(%llu) = 2\n", a);



if(a>3){
cont=4;

while(cont<=a+1)
{
    cont++;
    a0=a1+a2;
    a1=a2;
    a2=a0;

}

printf("Fib(%llu) = %llu\n", a,a2);
}

estancias--;}
return(0);
}

