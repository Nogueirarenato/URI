#include <stdio.h>

int main()

{   int c1,c2,c3, v[120],n, m1, minimo,posi;

   c1=0;
   n=0;
   scanf("%d",&c1);

   while(n<=c1-1)
   {
       scanf("%d", &v[n]);

       n++;
   }

m1=n;
minimo=2555;
posi=666;

while(m1>0)
 {
     if(v[m1]>=v[m1-1]&&v[m1-1]<=minimo){minimo=v[m1-1]; posi=m1;}
     m1--;
 }


printf("%d\n", posi);



    return(0);
}
