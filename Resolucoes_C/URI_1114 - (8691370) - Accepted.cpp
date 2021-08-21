#include <stdio.h>

int main ()
{int a, flag;
flag=0;
while(flag==0)
{   scanf("%d",&a);
    if(a==2002){printf("Acesso Permitido\n"); flag++;}
    else printf("Senha Invalida\n");
}



return(0);
}
