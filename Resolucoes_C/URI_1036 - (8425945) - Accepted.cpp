#include<stdio.h>
#include<math.h>

int main()
{ double a,b,c,x1,x2;
 int flag;
 scanf("%lf%lf%lf", &a,&b,&c);
 flag=0;

 if(a==0)flag=1;
 if((b*b)-(4*a*c)<0)flag=1;

             if(flag==0)
             {x1=(b*(-1)+sqrt ((b*b)-(4*a*c)))/(2*a);
              x2=(b*(-1)-sqrt ((b*b)-(4*a*c)))/(2*a);
              printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
             }

             else printf ("Impossivel calcular\n");

}
