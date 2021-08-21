#include <stdio.h>

int main()
{ int casos, n1,n2,n3, lesma,contador;

while((scanf("%d",&casos)!=EOF)){

      contador=0;
       n1=0;
       n2=0;
       n3=0;

          while(contador<casos){

            scanf("%d", &lesma);
            if(lesma<10)n1++;
            if(lesma>=10 && lesma<20)n2++;
            if(lesma>=20)n3++;





          contador++;
          }

            if(n3!=0)printf("3\n");
            if(n2>0 && n3==0)printf("2\n");
            if(n1>0 && n2==0 && n3==0)printf("1\n");









      }

  return(0);
}
