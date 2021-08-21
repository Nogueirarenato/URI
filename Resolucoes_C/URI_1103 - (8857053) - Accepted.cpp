#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{ int h1, h2, m1, m2, Th,Tm,T;

h1=h2=m1=m2=1;

while(h1!=0 || h2!=0 || m1!=0 || m2!=0){

    scanf("%d %d %d %d", &h1,&m1,&h2,&m2);

if(h1!=0 || h2!=0 || m1!=0 || m2!=0){
    Tm=0;
    Th=0;

if(m1==m2 && h1==h2)Tm=1440;

else
{

    if(h2<h1)Th=(24-h1+h2)*60;
    if(h2>h1)Th= (h2-h1)*60;
    if(h1==h2 && m2<m1)Th=Th+1440;

    if(m2>m1)Tm=m2-m1;
    if(m2<m1)Tm=(-m1+m2);}


    T=Tm+Th;

    printf("%d\n", T);

}}
return(0);
}
