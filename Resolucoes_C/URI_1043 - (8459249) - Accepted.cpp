#include <stdio.h>
#include <stdlib.h>


int main()
{ unsigned long long int a,b,c,a1,b1,c1,flag, p, ar,d,e,f;
  double area, perimetro;
  scanf("%llu.%llu %llu.%llu %llu.%llu",&a,&a1,&b,&b1,&c,&c1);
  a=a*100+a1*10;
  b=b*100+b1*10;
  c=c*100+c1*10;
  flag=0;
  d=(b+c);
  e=(a+c);
  f=(a+b);
  if(a>=d)flag=1;
  if(b>=e)flag=1;
  if(c>=f)flag=1;

  if(flag==0)
              {p=(a+b+c);
               perimetro= (double)p;
               perimetro=perimetro/100;
               printf("Perimetro = %.1lf\n", perimetro );
              }

  else {ar=(a+b)*c;
        area= (double)ar;
        area=area/20000;
        printf("Area = %.1lf\n", area);
  }



return (0);
  }
