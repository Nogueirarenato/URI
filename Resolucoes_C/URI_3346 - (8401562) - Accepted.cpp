#include <stdio.h>

int main() {

double a, b, resultado;

scanf("%lf %lf", &a, &b);

resultado =(( 1+ a/100)*(1+b/100)-1)*100;

printf("%.6lf\n", resultado );

    return 0;
}
