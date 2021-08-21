#include <stdio.h>
#include <string.h>

int main ()
{int cont, estancias, abriu, horas, minutos;


cont=0;
scanf("%d", &estancias);

while(cont<estancias){

scanf("%d %d %d", &horas, &minutos, &abriu);



if(abriu==1)printf("%.2d:%.2d - A porta abriu!\n", horas, minutos);
else printf("%.2d:%.2d - A porta fechou!\n", horas, minutos);

    cont++;
}


    return(0);
}
