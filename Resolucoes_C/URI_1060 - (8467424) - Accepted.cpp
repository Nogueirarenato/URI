#include <stdio.h>

int main ()
{   int a,b,c,d,e,f, flag;
    flag=0;
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    if(a>0)flag++;
    if(b>0)flag++;
    if(c>0)flag++;
    if(d>0)flag++;
    if(e>0)flag++;
    if(f>0)flag++;

    printf("%d valores positivos\n", flag);

    return(0);
}
