#include <stdio.h>
#include <string.h>


int main ()
{unsigned long long int M, P;

M=1;
P=1;

while (M!=0 || P!=0)
{
    scanf("%llu %llu", &M, &P);

    if (M!=0 || P!=0){
    printf("%llu\n", M*P);



    }

}


return(0);
}
