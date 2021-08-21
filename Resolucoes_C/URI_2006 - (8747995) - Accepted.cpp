#include <stdio.h>
#include <math.h>

int main ()

{

int cha, a, b, c, d, e, cont;
cont=0;

scanf("%d %d %d %d %d %d", &cha, &a, &b, &c, &d, &e);

if(a==cha)cont++;
if(b==cha)cont++;
if(c==cha)cont++;
if(d==cha)cont++;
if(e==cha)cont++;

printf("%d\n", cont);




return(0);
}
