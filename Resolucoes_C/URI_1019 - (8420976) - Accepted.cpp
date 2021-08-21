#include<stdio.h>
#include<math.h>
int main()
{   int n, minutos, segundos, horas;
  scanf("%d",&n);
  if(n<60) printf("0:0:%d\n",n);

  if(n>=60 && n<3600)
  {minutos=n/60;
   segundos= n-(minutos*60);
   printf("0:%d:%d\n",minutos,segundos);

  }

 if(n>=3600)
 {horas=n/3600;
  minutos=n-(horas*3600);
  minutos=minutos/60;
  segundos= n-(horas*3600)-(minutos*60);
   printf("%d:%d:%d\n",horas,minutos,segundos);

 }

return(0);
}
