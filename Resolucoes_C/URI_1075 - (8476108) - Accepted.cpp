#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ int a, cont;
scanf("%d", &a);
cont=1;
while(cont<=10000)
{ if(cont%a==2)printf("%d\n",cont);
    cont++;
}


return(0);
}
