#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
int a, b, c, flag;
scanf("%d %d", &a,&b);
flag=0;
c=b;
if (b>a){
b=a;
a=c;
}
if(a%b==0) flag=1;

if (flag==0) printf ("Nao sao Multiplos\n");
else printf ("Sao Multiplos\n");


return(0);
}
