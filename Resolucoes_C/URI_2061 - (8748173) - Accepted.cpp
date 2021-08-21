#include <stdio.h>
#include <math.h>

int main ()

{ int inicio, estancias, cont,n;
  char aba[20];
  n=0;
  cont=0;
  scanf("%d %d", &inicio, &estancias);

  while(cont<estancias){
    scanf("%s", &aba);
    if(aba[0]=='f')n++;
    if(aba[0]=='c') n--;
   


    cont++;
  }

printf("%d\n", inicio+n);




return(0);
}
