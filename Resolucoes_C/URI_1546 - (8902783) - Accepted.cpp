#include <stdio.h>
#include <string.h>


int main()
{
   int R, cont, estancias,cont2, casos;
   cont=0;
   cont2=0;

   scanf("%d", &estancias);

   while(cont<estancias){

    scanf("%d", &casos);
    while(cont2<casos){
    scanf("%d", &R);

    if(R==1)printf("Rolien\n");
    if(R==2)printf("Naej\n");
    if(R==3)printf("Elehcim\n");
    if(R==4)printf("Odranoel\n");



    cont2++;
    }



    cont2=0;
    cont++;
   }







return(0);
}
