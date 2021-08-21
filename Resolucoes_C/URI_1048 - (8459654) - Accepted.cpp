#include <stdio.h>
#include <stdlib.h>


int main()
{double salario, reajuste;
    scanf("%lf", &salario);
    if(salario<=400.00)reajuste = 0.15;
    if(salario>=400.01 && salario <=800.00)reajuste = 0.12;
    if(salario>=800.01 && salario <= 1200.00)reajuste = 0.10;
    if(salario>= 1200.01 && salario <=2000.00)reajuste = 0.07;
    if(salario>=2000.01)reajuste = 0.04;

    printf("Novo salario: %.2lf\n", salario+salario*reajuste);
    printf("Reajuste ganho: %.2lf\n", salario*reajuste);
    printf("Em percentual: %.0lf %%\n", reajuste*100);
 return(0);
  }