#include <stdio.h>

int main ()
{   float a,b,c,d,e,f, flag,m,media;
    flag=0;
    m=0;
    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);
    if(a>0){flag++;m=m+a;}
    if(b>0){flag++;m=m+b;}
    if(c>0){flag++;m=m+c;}
    if(d>0){flag++;m=m+d;}
    if(e>0){flag++;m=m+e;}
    if(f>0){flag++;m=m+f;}
    media=m/flag;

    printf("%.0f valores positivos\n", flag);
    printf("%.1f\n", media);

    return(0);
}
