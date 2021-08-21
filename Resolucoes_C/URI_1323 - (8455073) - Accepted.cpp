#include <stdio.h>


int main ()
{int a,b,c;
c=1;

while (c>0){
   scanf("%d", &c);
   if(c>0){if(c==1||c==2){if(c==1)printf("1\n");
                          if(c==2)printf("5\n");
                          }
    else{a=5;
        b=3;
        while(b<c){ a=a+b*b;
                    b++;
                    }
         a=a+c*c;
         printf("%d\n", a);
        }}
}



return (0);
}
