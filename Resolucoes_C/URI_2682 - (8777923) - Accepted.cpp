#include <stdio.h>

int main()
{int maior, menor, flag, memoria;
flag=0;
maior=3;
menor=0;

while(scanf("%d", &maior)!=EOF)
{
    if(flag==0){
    if(menor>=maior){flag=1; memoria=menor; break;}
    menor=maior;

    }




}
if(flag==0)memoria=maior;
 printf("%d\n", memoria+1);
return(0);

}
