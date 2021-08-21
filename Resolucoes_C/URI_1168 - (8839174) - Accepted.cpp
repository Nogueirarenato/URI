#include <stdio.h>
#include <string.h>

int main ()
{ int cont, cont2,estancias, total, tamanho;
char led[3000];

cont=0;
scanf("%d", &estancias);

while(cont<estancias){

    scanf("%s", &led);
    tamanho=strlen(led);
    tamanho=tamanho-1;
    total=0;
    cont2=0;

    while(cont2<=tamanho){
    if(led[cont2]=='0')total=total+6;
    if(led[cont2]=='1')total=total+2;
    if(led[cont2]=='2')total=total+5;
    if(led[cont2]=='3')total=total+5;
    if(led[cont2]=='4')total=total+4;
    if(led[cont2]=='5')total=total+5;
    if(led[cont2]=='6')total=total+6;
    if(led[cont2]=='7')total=total+3;
    if(led[cont2]=='8')total=total+7;
    if(led[cont2]=='9')total=total+6;
        cont2++;
    }
printf("%d leds\n", total);







    cont++;
}







return(0);
}
