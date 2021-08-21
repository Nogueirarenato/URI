#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{   int a[100], maior, posicao, contador;
contador=1;
posicao=1;
while(contador<=100){
    scanf("%d", &a[contador]);
    contador++;
}
contador=1;
maior=a[1];
while(contador<=100){
        contador++;
    if(a[contador]>=a[contador-1]&& a[contador]>maior){maior=a[contador];posicao=contador;}


}

printf("%d\n", maior);
printf("%d\n", posicao);
return (0);
}
