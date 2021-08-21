#include <stdio.h>

int main ()
{ int contador, N;
contador=1;
scanf("%d", &N);

while(contador<=N)
{
  printf("%d %d %d\n", contador, contador*contador, contador*contador*contador);



    contador++;
}




return(0);
}
