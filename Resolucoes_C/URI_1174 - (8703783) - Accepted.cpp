#include <stdio.h>

int main ()
{ float a[100];
  int cont;
cont=0;

while(cont<=99){
    scanf("%f", &a[cont]);
    cont++;
}

cont=0;
while(cont<=99){

    if(a[cont]<=10)printf("A[%d] = %.1f\n", cont, a[cont]);

    cont++;
}

return(0);
}

