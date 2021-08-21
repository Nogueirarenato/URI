#include <stdio.h>
#include <string.h>

int main ()
{ int cont, estancias, a, b, soma;

cont=0;
scanf("%d", &estancias);

while(cont<estancias){

    scanf("%d %d", &a, &b);
    soma=a+b;

    if(soma==0)printf("PROXYCITY\n");
    if(soma==1)printf("P.Y.N.G.\n");
    if(soma==2)printf("DNSUEY!\n");
    if(soma==3)printf("SERVERS\n");
    if(soma==4)printf("HOST!\n");
    if(soma==5)printf("CRIPTONIZE\n");
    if(soma==6)printf("OFFLINE DAY\n");
    if(soma==7)printf("SALT\n");
    if(soma==8)printf("ANSWER!\n");
    if(soma==9)printf("RAR?\n");
    if(soma==10)printf("WIFI ANTENNAS\n");





    cont++;


}



    return(0);
}
