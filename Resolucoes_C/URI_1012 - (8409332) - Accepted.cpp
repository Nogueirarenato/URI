#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ double a, b, c, area;
scanf("%lf%lf%lf", &a,&b,&c);

area= a*c/2;
printf("TRIANGULO: %.3lf\n", area);

area=c*c*3.14159;
printf("CIRCULO: %.3lf\n", area);

area=(a+b)*c/2;
printf("TRAPEZIO: %.3lf\n", area);

area=b*b;
printf("QUADRADO: %.3lf\n", area);

area=a*b;
printf("RETANGULO: %.3lf\n", area);

    return 0;
}
