#include <stdio.h>

int main ()
{int cont,c2,a;
double b;
scanf("%lf", &b);
cont=0;
while(cont<=99)
{
    printf("N[%d] = %.4lf\n", cont, b);
    b=b/2;


    cont++;
}




return(0);
}

