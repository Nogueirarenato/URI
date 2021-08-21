#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{ long long int p1, p2, d, T;
p1=1;
p2=1;
d=1;

while(p2!=0){

    scanf("%lld %lld %lld", &p2, &d, &p1);

    if(p2!=0)
    {

        T=-(p1*p2*d)/(p2-p1);
        if(T==1)printf("%lld pagina\n", T);
        else printf("%lld paginas\n", T);
    }

}
return(0);
}
