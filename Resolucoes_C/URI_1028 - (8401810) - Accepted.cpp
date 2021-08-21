#include <iostream>
 
using namespace std;
 
int main() {
 int a,b,c,d, e, resto, resto1, entradas, contador;
scanf("%d", &entradas);

contador =0;

while(contador<entradas)
    {
scanf("%d%d", &a, &b);
    if(a>b)
        { c=a;
          d=b;
        }
    else {c=b;
          d=a;}
resto1=1;

while (resto1!=0)
{
    resto= c%d;
    c=d;
    if (resto!=0)d=resto;
    resto1=resto;

}
    printf("%d\n", d);
 contador++;
}

    return 0;
 
}