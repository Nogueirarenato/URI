#include<stdio.h>
#include<math.h>
int main()
{   float distancia, tempo;
    float combustivel, velocidade;
    scanf("%f%f",&tempo, &velocidade);
    distancia=tempo*velocidade;
    combustivel=distancia/12;
    printf("%.3f\n",combustivel);

return(0);
}
