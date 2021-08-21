#include <stdio.h>
int main ()
{ int x, y, a, b, soma;


    scanf("%d %d", &x,&y);
    if(x>=y){a=x;b=y;}
    if(x<y){a=y;b=x;}
    soma=0;
    b=b+1;
    while(b<a)
    {if(b%2!=0)soma=soma+b;
    b++;
    }
    printf("%d\n",soma);


return(0);
}
