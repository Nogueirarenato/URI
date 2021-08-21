#include<stdio.h>
#include<math.h>

int main()
{   int codigo;
    float quantidade;
    scanf("%d%f", &codigo,&quantidade);

    if(codigo==1)printf("Total: R$ %.2f\n",quantidade*4);
    if(codigo==2)printf("Total: R$ %.2f\n",quantidade*4.5);
    if(codigo==3)printf("Total: R$ %.2f\n",quantidade*5);
    if(codigo==4)printf("Total: R$ %.2f\n",quantidade*2);
    if(codigo==5)printf("Total: R$ %.2f\n",quantidade*1.5);


return(0);
}
