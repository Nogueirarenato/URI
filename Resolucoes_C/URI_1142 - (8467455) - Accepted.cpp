#include <stdio.h>

int main ()
{   int c, c1, c2, d, cont;
    scanf("%d",&d);
    c=1;
    c1=2;
    c2=3;
    cont=0;
    while(cont<d)
        {printf("%d %d %d PUM\n", c, c1, c2);
    c=c+4;
    c1=c1+4;
    c2=c2+4;
    cont++;}

    return(0);
}
