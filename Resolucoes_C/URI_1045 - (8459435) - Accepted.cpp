#include <stdio.h>
#include <stdlib.h>


int main()
{ double x,y,z,p,s,t;
scanf("%lf %lf %lf", &x,&y,&z);

if(x>=y && x>=z){p=x;
                 if(y>=z){s=y;
                          t=z;
                 }
                else{s=z;
                     t=y;
                }}

if(y>=x && y>=z){p=y;
                 if(x>=z){s=x;
                          t=z;
                 }
                else{s=z;
                     t=x;
                }}

if(z>=x && z>=y){p=z;
                 if(x>=y){s=x;
                          t=y;
                 }
                else{s=y;
                     t=x;
                }}

if(p>=s+t)printf("NAO FORMA TRIANGULO\n");
else{if((p*p)==((s*s)+(t*t)))printf("TRIANGULO RETANGULO\n");
if((p*p)>((s*s)+(t*t)))printf("TRIANGULO OBTUSANGULO\n");
if((p*p)<((s*s)+(t*t)))printf("TRIANGULO ACUTANGULO\n");

if(p==t||p==s||t==s){if(p==t&&p==s&&t==s)printf("TRIANGULO EQUILATERO\n");
                     else printf("TRIANGULO ISOSCELES\n");

                    }}

return (0);
  }
