#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
char nome[100];
double valor, vendas, total;
scanf("%s%lf%lf", nome, &valor, &vendas);
total= valor+vendas*0.15;
printf ("TOTAL = R$ %.2lf\n", total);

return 0;
}
