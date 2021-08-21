#include <stdio.h>

int main ()
{int a,cont;
 long int q;
    cont=2;
    scanf("%d",&a);
    while(cont<=a)
    {q=cont*cont;
     printf("%d^2 = %ld\n", cont,q);
        cont++;
        cont++;
        
    }
    
    
    
return (0);
}