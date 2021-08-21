#include <stdio.h>

int main()
{ unsigned long long int casos, contador;
contador=0;
scanf("%llu7",&casos);

while(contador<casos){

    if(contador<casos-1)printf("Ho ");
    else printf("Ho!\n");
    contador++;
}

  return(0);
}
