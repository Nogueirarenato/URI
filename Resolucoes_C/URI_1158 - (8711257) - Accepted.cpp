#include <stdio.h>

int main ()
{ int a, cont, b, c, cont2,soma;
cont=0;

scanf("%d",&a);
while(cont<a)
      { scanf("%d %d", &b, &c);
      soma=0;
     if(b!=a)
     {cont2=1;
      soma=0;
      if(b!=1 && b!=-1){
    if(b%2==0)b=b+1;}

    while(cont2<=c)
    {  if(b==1||b==-1) {if (b==1)soma=soma+1;
        if(b==-1)soma=soma-1;}
        else{if(b%2==1 || b%2==-1)soma=soma+b;}
        cont2++;
        b=b+2;
    }}

    printf("%d\n",soma);






        cont++;
        }


return(0);
}
