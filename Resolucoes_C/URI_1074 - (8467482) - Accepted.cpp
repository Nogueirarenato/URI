#include <stdio.h>

int main ()
{   int A, cont, f1, f2;
    long int d;
    scanf("%d",&A);
    cont=0;

    while(cont<A){
        f1=0;
        f2=0;
        scanf("%ld",&d);
    if(d!=0){if(d>0)f1=1;
     if(d%2==0)f2=1;

        if(f2==1)printf ("EVEN ");
        else printf ("ODD ");

        if(f1==0)printf ("NEGATIVE\n");
        else printf ("POSITIVE\n");}
    else printf("NULL\n");

    cont++;
    }

    return(0);
}
