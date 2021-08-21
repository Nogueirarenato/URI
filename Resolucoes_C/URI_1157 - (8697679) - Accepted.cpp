#include <stdio.h>

int main ()
{ int a, cont;

scanf("%d", &a);
cont=1;

while(cont<=a){

    if(a%cont==0)printf("%d\n",cont);
    cont++;

}

}
