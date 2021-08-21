#include <stdio.h>

int main ()
{ int a,b,c1,d,e,f,g,c, cont;
scanf("%d", &c1);
cont=1;
a=1;
b=1;
c=1;
d=1;
e=2;
f=2;
while(cont<=c1){
    printf("%d %d %d\n%d %d %d\n",a,b,c,d,e,f);
    a=a+1;
    d=d+1;
    b=a*a;
    c=a*a*a;
    e=b+1;
    f=c+1;
    cont++;

}



return (0);
}
