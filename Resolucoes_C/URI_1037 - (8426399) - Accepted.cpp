#include<stdio.h>
#include<math.h>

int main()
{   int flag;
    double a;
    scanf("%lf",&a);

 flag=0;

 if(a>=0.0000000 && a<=25.0000000 )
 {printf("Intervalo [0,25]\n");
  flag++;
 }

 if(a>25.0000000 && a<=50.0000000)
     {printf("Intervalo (25,50]\n");
  flag++;
 }


 if(a>50.0000000 && a<=75.0000000)
    {printf("Intervalo (50,75]\n");
  flag++;
 }


 if(a>75.0000000 && a<=100.0000000)
    {printf("Intervalo (75,100]\n");
  flag++;
 }


 if(flag==0)printf("Fora de intervalo\n");



return(0);
}