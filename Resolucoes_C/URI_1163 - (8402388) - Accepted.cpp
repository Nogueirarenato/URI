#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    double h, ang, Vmax, g, pi, saida;
    int p1, p2, tentativas, contador,a, i;

    g= 9.80665;
    pi= 3.14159;
 while( scanf("%lf%d%d%d", &h,&p1,&p2,&tentativas)!= EOF){
        contador=0;
        i=EOF;

        while(contador<tentativas)
        {
            scanf("%lf%lf", &ang,&Vmax);
            saida=Vmax*cos(ang*pi/180)*(Vmax*sin(ang*pi/180)/g+sqrt(2*(h+Vmax*sin(ang*pi/180)*Vmax*sin(ang*pi/180)/g-g/2*Vmax*sin(ang*pi/180)/g*Vmax*sin(ang*pi/180)/g)/g));


            if (p1<=saida && p2>=saida) printf ("%.5lf -> DUCK\n", saida);
            else printf ("%.5lf -> NUCK\n", saida);

            contador++;
        }
 }

    return 0;
}
