#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ int comida, dias, estancias, contador;
contador=0;
scanf("%d", &estancias);
double calculo;
    while (contador < estancias)
        {
            scanf("%d", &comida);
            calculo=comida;
            dias=0;
            while(calculo >1)
            { calculo=calculo/2;
              dias++;
            }
            printf ("%d dias\n", dias);

        contador++;
        }
    return 0;
}
