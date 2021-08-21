#include <stdio.h>

int main()
{ int a, b,sa,sb, cont, estancias;


scanf("%d", &estancias);
cont=1;
sa=0;sb=0;
while(estancias!=0)
{
    while(cont<=estancias){


            scanf("%d %d", &a, &b);
            if(a>b)sa++;
            if(b>a)sb++;





    if(cont==estancias)printf("%d %d\n", sa,sb);
    cont++;
    }
    scanf("%d",&estancias);
    cont=1;
    sa=0;
    sb=0;
}



return(0);
}
