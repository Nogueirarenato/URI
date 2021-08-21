#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
unsigned long long int a, b, soma, cont,d, cont2;
char veta[50],vetb[50];

a=1;
b=1;
while(a!=0 || b!=0){

cont=0;
cont2=1;
scanf("%llu %llu", &a, &b);
if(a!=0 || b!=0){
soma=a+b;

 sprintf (vetb, "%llu", soma);

cont2=strlen(vetb);




while(cont<cont2)
{

if(vetb[cont]!='0') printf("%c", vetb[cont]);
cont++;
}

printf("\n");

}



}
return(0);
}
