#include <stdio.h>

int main ()
{ int a,b, c, d, soma;

soma=0;
scanf("%d %d", &a, &b);
if(a<b){c=a;d=b;}
else {c=b;d=a;}

while(c<=d){
    if(c%13!=0)soma=soma+c;
    c++;

}


printf("%d\n",soma);


return (0);
}
