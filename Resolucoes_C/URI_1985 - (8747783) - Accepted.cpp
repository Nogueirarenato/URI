#include <stdio.h>
#include <math.h>

int main ()

{ int cont, estancias, a, b;
  float h1, h2, h3, h4, h5,total;

cont=0;
scanf("%d", &estancias);
h1=0;
h2=0;
h3=0;
h4=0;
h5=0;
while(cont<estancias){



    scanf("%d %d", &a,&b);

    if(a==1001)h1=h1+1.5*b;
    if(a==1002)h2=h2+2.5*b;
    if(a==1003)h3=h3+3.5*b;
    if(a==1004)h4=h4+4.5*b;
    if(a==1005)h5=h5+5.5*b;



    cont++;
}

total=h1+h2+h3+h4+h5;

printf("%.2f\n", total);



return(0);
}
