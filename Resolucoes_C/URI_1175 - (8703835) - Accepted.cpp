#include <stdio.h>

int main ()
{ int a[20], b[20];
  int cont, cont2;
cont=0;

while(cont<=19){
    scanf("%d", &a[cont]);
    cont++;
}

cont=0;

while(cont<=19){
   b[cont]=a[cont];
    cont++;
}




cont=0;
cont2=19;
while(cont<=9){
    a[cont]=b[cont2];
    printf("N[%d] = %d\n", cont, a[cont]);
    cont2--;
    cont++;
}

cont=9;
cont2=10;
while(cont>=0){
   printf("N[%d] = %d\n", cont2, b[cont]);
    cont--;
    cont2++;
}




return(0);
}
