#include <stdio.h>

int main ()
{   float salario, imposto;
    scanf("%f", &salario);

    if(salario<=2000.00)printf ("Isento\n");
    if(salario>=2000.01&& salario<=3000.00)printf("R$ %.2f\n", 0.08*(salario -2000));
    if(salario>=3000.01&& salario<=4500.00)printf("R$ %.2f\n", 0.18*(salario-3000)+79.99992);
    if(salario>=4500.01)printf("R$ %.2f\n", 0.28*(salario-4500)+349.99812);

    return(0);
}
