#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{   int estancias, contador, a[15], b[15];
    unsigned long long int Vb, Va, i, j  , flag ,resto,c,d;
    contador=0;
    scanf("%d",&estancias);


    while(contador<estancias){
 								scanf("%llu%llu", &Va, &Vb);
 								i=0;
 								flag=0;
 								i=0;
 								j=0;




								 while(Va>=10)
								 {
								  resto=Va%10;
								  a[i]=resto;
								  Va=Va/10;
								   i++;}
								  a[i]=Va;



								 while(Vb>=10)
								 {
								  resto=Vb%10;
								  b[j]=resto;
								  Vb=Vb/10;
								  j++;
								 }
								 b[j]=Vb;



								 i=0;
								 while(i<=j)
								 {
								  c=b[i];
								  d=a[i];
								  if(c!=d)flag=1;

								 i++;
								 }


								   if(flag==0)printf("encaixa\n");
								   else printf("nao encaixa\n");



    contador++;
    }
return(0);
}
