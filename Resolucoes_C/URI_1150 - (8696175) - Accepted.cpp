#include <stdio.h>

int main ()
{int a, b, c, d, soma;
b=-32000;
scanf("%d", &a);

while(b<=a)
{
    scanf("%d",&b);
}
d=1;
soma=a;
while(soma<=b)
{   a++;
    d++;
    soma=soma+a;
}

printf("%d\n", d);



return(0);
}

