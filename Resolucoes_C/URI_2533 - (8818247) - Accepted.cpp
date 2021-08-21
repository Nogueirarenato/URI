#include <stdio.h>
#include <string.h>


int main ()
{double numerador, denominador, nota, carga;
int cont, estancias;

while(scanf("%d", &estancias)!=EOF){
cont=0;
numerador=0;
denominador=0;
while(cont<estancias){


    scanf("%lf %lf", &nota, &carga);

    numerador= numerador+nota*carga;
    denominador=denominador+carga;


    cont++;
}
if (denominador==0){printf("0.0000\n");}
else printf("%.4lf\n", numerador/(denominador*100));}
return(0);
}
