#include <stdio.h>

int main ()
{
    int h, m, total;

    while(scanf("%d:%d", &h, &m)!=EOF){


    if(h<7)printf("Atraso maximo: 0\n");
    if(h==7 && m==0)printf("Atraso maximo: 0\n");
    else    {if(h>=7 ){


    total=60*(h-7)+m;
    printf ("Atraso maximo: %d\n", total);
    }
    }


    }
return(0);

}
