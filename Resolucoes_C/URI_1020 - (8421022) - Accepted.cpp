#include<stdio.h>
#include<math.h>
int main()
{   int n, anos,meses,dias;
  scanf("%d", &n);
  anos=n/365;
  meses=(n-(anos*365))/30;
  dias= n - anos*365 - meses*30;
printf("%d ano(s)\n", anos);
printf("%d mes(es)\n",meses);
printf("%d dia(s)\n",dias);



return(0);
}
