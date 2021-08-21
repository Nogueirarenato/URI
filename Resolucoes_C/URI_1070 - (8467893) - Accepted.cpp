#include <stdio.h>
int main ()
{ int a;

scanf("%d",&a);

if(a%2==0)a=a+1;

printf("%d\n",a);
printf("%d\n",a+2);
printf("%d\n",a+4);
printf("%d\n",a+6);
printf("%d\n",a+8);
printf("%d\n",a+10);

return(0);
}
