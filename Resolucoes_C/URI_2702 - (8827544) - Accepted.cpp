#include <stdio.h>
int main()
{
int a, b,c,a1,b1,c1,soma;

soma=0;
scanf("%d %d %d %d %d %d",&a,&b,&c,&a1,&b1,&c1);
if(a1-a>0)soma=soma+a1-a;
if(b1-b>0)soma=soma+b1-b;
if(c1-c>0)soma=soma+c1-c;

printf("%d\n", soma);


return(0);
}


