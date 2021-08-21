#include <stdio.h>
#include <math.h>

int main ()
{ double ln, numero, minimo, maximo;

scanf("%lf",&numero);

ln=log(numero);
minimo=numero/ln;
maximo=1.25506*minimo;

printf("%.1lf %.1lf\n", minimo, maximo);



    return(0);
}
