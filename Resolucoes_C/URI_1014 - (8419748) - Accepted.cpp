#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{ float consumo, gasto;
  int distancia;

  scanf("%d%f",&distancia,&gasto);

  consumo=(float)distancia/gasto;

  printf("%.3f km/l\n", consumo);

    return 0;
}
