#include <stdio.h>

int main ()
{int a,flag;
 
    flag=0;
    scanf("%d",&a);
    if(a==61){printf("Brasilia\n");flag++;}
    if(a==71){printf("Salvador\n");flag++;}
    if(a==11){printf("Sao Paulo\n");flag++;}
    if(a==21){printf("Rio de Janeiro\n");flag++;}
    if(a==32){printf("Juiz de Fora\n");flag++;}
    if(a==19){printf("Campinas\n");flag++;}
    if(a==27){printf("Vitoria\n");flag++;}
    if(a==31){printf("Belo Horizonte\n");flag++;}
    if(flag==0){printf("DDD nao cadastrado\n");flag++;}
    
    
return (0);
}