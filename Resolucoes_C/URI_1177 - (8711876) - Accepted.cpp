#include <stdio.h>

int main ()
{int c1,c2,a;
scanf("%d", &a);
c1=0;
c2=0;

while(c1<=999){

            while(c2<a)
            {
                if(c1<=999)printf("N[%d] = %d\n", c1, c2);
                c1++;
                c2++;
            }
    c2=0;

}




return(0);
}

