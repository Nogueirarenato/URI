#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{   float a, b, c, media;
    int  contador, estancias;
contador=0;
scanf("%d", &estancias);

while(contador<estancias){
    scanf("%f %f %f", &a,&b,&c);
    media= (2*a+3*b+5*c)/10;
    printf("%.1f\n", media);
    contador++;  }

return (0);
}
