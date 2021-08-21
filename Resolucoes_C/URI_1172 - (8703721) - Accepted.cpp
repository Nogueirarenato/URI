#include <stdio.h>

int main ()
{ int a[10], cont;
cont=0;

while(cont<=9){
    scanf("%d", &a[cont]);
    cont++;
}

cont=0;
while(cont<=9){

    if(a[cont]<=0)printf("X[%d] = 1\n", cont);
    else printf("X[%d] = %d\n", cont, a[cont]);
    cont++;
}

return(0);
}

