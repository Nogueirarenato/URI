#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
double raio, volume;
scanf("%lf", &raio);
volume= 4* 3.14159*raio*raio*raio/3;
printf ("VOLUME = %.3lf\n", volume);
return 0;
}
