#include <stdio.h>

int main ()
{ int a,b, c, d;


scanf("%d %d", &a, &b);
if(a<b){c=a;d=b;}
else {c=b;d=a;}

while(c<d){c++;
    if(c%5==2 || c%5==3)printf("%d\n",c);


}





return (0);
}
