#include <stdio.h>

int main ()
{ int a, b;
scanf("%d", &a);

b=a-1;
while(b>=1)
{
    a=a*b;
    b--;
}
    printf("%d\n", a);



return(0);
}
