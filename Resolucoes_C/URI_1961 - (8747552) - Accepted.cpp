#include <iostream>
 
using namespace std;
 
int main() {
 
   int a, b, c,cont, pulos1, pulos, flag;
flag=0;
scanf("%d %d", &a, &b);
cont=0;
scanf("%d", &pulos1);
while(scanf("%d", &pulos)!=EOF){

    c=abs(pulos-pulos1);

    if(a<c)flag++;


    pulos1=pulos;

    cont++;
}

if(flag==0){

    if(cont<=b)printf("YOU WIN\n");
    else printf ("GAME OVER\n");}

    else printf ("GAME OVER\n");
 
    return 0;
}