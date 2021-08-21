#include <stdio.h>
#include <stdlib.h>


int main()
{int a,b,c,d, h, m;
scanf("%d %d %d %d", &a,&c, &b, &d);
if(a==c && b==d)printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");


else{if(a==b){if(d>=c)m=d-c;
              else m=60-d+c;
              printf ("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m);

             }

     if(a<b){
              if(d>=c)m=d-c;
              else {m=60-c+d; a=a+1;}
              printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b-a, m);

            }

    if(a>b){
              if(d>=c)m=d-c;
              else {m=60-c+d; a=a+1;}
              printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+b, m);

            }

}
return (0);
}
