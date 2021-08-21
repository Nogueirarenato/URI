#include <stdio.h>
#include <string.h>


int main ()
{ int A,B,C,D,E,cont,estancias,flag;

cont=0;
scanf("%d",&estancias);

while(cont<estancias && estancias!=0){

flag=0;
scanf("%d %d %d %d %d", &A, &B,&C,&D,&E);

if(A<=127)flag++;
if(B<=127)flag++;
if(C<=127)flag++;
if(D<=127)flag++;
if(E<=127)flag++;

if(flag==1){
if(A<=127)printf("A\n");
if(B<=127)printf("B\n");
if(C<=127)printf("C\n");
if(D<=127)printf("D\n");
if(E<=127)printf("E\n");

}
else printf("*\n");












    cont++;

if(cont==estancias){scanf("%d", &estancias);cont=0;}
}




return(0);
}
