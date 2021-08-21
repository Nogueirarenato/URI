#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ unsigned long long int a,b;
    while(scanf("%llu%llu",&a,&b)!=EOF) {

        if(b>a){printf("%llu\n",b-a);}
        if(a>=b){printf("%llu\n",a-b);}
        }




    return 0;
}
