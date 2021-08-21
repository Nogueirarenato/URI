#include <stdio.h>

int main()
{int a, b, c, p,s,t,a1,b1,c1;

scanf("%d%d%d", &a, &b, &c);
a1=a;
b1=b;
c1=c;


if(a>=b && a>=c){
                p=a;
                if(b>=c){s=b;
                         t=c;}

                else {s=c;
                      t=b;}}

if(b>=a && b>=c){
                p=b;
                if(a>=c){s=a;
                         t=c;}

                else {s=c;
                      t=a;}}

 if( c>=a && c>=b){
                p=c;
                if(b>=a){s=b;
                         t=a;}

                else {s=a;
                      t=b;}}


printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", t, s, p, a1,b1,c1);




return (0);
}
