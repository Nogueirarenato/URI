#include <stdio.h>

int main ()
{ int a[10], cont;
cont=0;

scanf("%d", &a[cont]);
printf("N[0] = %d\n", a[0]);
cont++;
while(cont<=9)
{
    a[cont]=2*a[cont-1];
    printf("N[%d] = %d\n", cont, a[cont]);
    cont++;
}








return(0);
}

