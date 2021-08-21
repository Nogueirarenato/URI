#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    long long int a, b,c,d;
    while((scanf("%lld%lld", &a, &b))!=EOF){
    if(a==0)a=1;
    if(b==0)b=1;
        c=a;
        d=b;
        while(a!=1)
        {c=c*(a-1);
         a--;}
    while(b!=1)
        {d=d*(b-1);
         b--;}


    printf("%lld\n",d+c);
    }


    return 0;
}

