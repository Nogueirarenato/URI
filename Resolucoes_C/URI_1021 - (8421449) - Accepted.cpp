#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,troco, cem, cinquenta, vinte, dez, cinco, dois, um;
    int m50, m25, m10, m5, m1;
    scanf("%d.%d", &n, &m);


   cem=n/100;
   troco=n%100;
   cinquenta=troco/50;
   troco=troco%50;
   vinte=troco/20;
   troco=troco%20;
   dez=troco/10;
   troco=troco%10;
   cinco=troco/5;
   troco=troco%5;
   dois=troco/2;
   troco=troco%2;
   um=troco;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",cem);
printf("%d nota(s) de R$ 50.00\n", cinquenta);
printf("%d nota(s) de R$ 20.00\n", vinte);
printf("%d nota(s) de R$ 10.00\n", dez);
printf("%d nota(s) de R$ 5.00\n", cinco);
printf("%d nota(s) de R$ 2.00\n", dois);



m50=m/50;
troco=m%50;
m25=troco/25;
troco=troco%25;
m10=troco/10;
troco=troco%10;
m5=troco/5;
troco=troco%5;
m1=troco;


printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",um);
printf("%d moeda(s) de R$ 0.50\n",m50);
printf("%d moeda(s) de R$ 0.25\n",m25);
printf("%d moeda(s) de R$ 0.10\n",m10);
printf("%d moeda(s) de R$ 0.05\n",m5);
printf("%d moeda(s) de R$ 0.01\n",m1);










return(0);
}
