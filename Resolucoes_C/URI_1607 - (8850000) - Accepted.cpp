#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{   int estancias, contador,na,i,j;
    int contador3, contador2;
    char a[11005], b[11005];
    scanf("%d", &estancias);
    contador=0;
    while(contador<estancias){


        scanf("%s %s", &a, &b);
        na=strlen(a)-1;
        contador2=0;
        contador3=0;


        while(contador2<=na){

                i=a[contador2];
                j=b[contador2];
                if(j<i)contador3=contador3+26-abs(abs(j)-abs(i));
                else contador3=contador3+abs(abs(j)-abs(i));

     contador2++;}





printf("%d\n",contador3);
contador++;}

return (0);
}
