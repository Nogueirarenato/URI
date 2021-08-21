#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <inttypes.h>

int main ()
{ int a,b, contador, contador2;
  unsigned long long int c;
  scanf("%d", &a);
  contador =0;
while(contador<a){
scanf("%d",&b);
contador2=0;
c=1;
while(contador2<b)
{c=c*2;
contador2++;}
c=c/12000;
if (b==64) printf("1537228672809129 kg\n");
else printf("%llu kg\n", c);
contador++;
}
    return 0;
}
