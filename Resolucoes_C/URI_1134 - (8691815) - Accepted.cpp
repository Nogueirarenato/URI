#include <stdio.h>

int main ()
{ int alc,gas,die,opc;
alc=0;
gas=0;
die=0;
scanf("%d",&opc);

while(opc!=1 && opc!=2 && opc!=3 && opc!=4)
{scanf("%d",&opc);}

while(opc!=4)

{ if(opc==1)alc++;
  if(opc==2)gas++;
  if(opc==3)die++;

  opc=0;
while(opc!=1 && opc!=2 && opc!=3 && opc!=4)
{scanf("%d",&opc);}
}

printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alc,gas,die);

return (0);
}