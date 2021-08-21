#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int codigo1, quantidade1, codigo2, quantidade2;
double valor1, valor2, total;
scanf("%d%d%lf%d%d%lf",&codigo1, &quantidade1, &valor1, &codigo2, &quantidade2, &valor2);
total= quantidade1*valor1+quantidade2*valor2;
printf ("VALOR A PAGAR: R$ %.2lf\n", total);

return 0;
}
