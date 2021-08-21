#include <stdio.h>
#include <math.h>

int main ()

{

    double volume, diametro, raio, area, altura;



while(scanf("%lf %lf",&volume, &diametro)!=EOF)

{
    raio=diametro/2;

    area=raio*raio*3.14;
    altura=volume/area;

    printf("ALTURA = %.2lf\n",altura);
    printf("AREA = %.2lf\n", area);





}



return(0);
}
