#include <stdio.h>
#include <math.h>

int main ()

{

long long int cont, numero, vetor[25],c1;

cont=0;

scanf("%llu", &numero);

while(numero>=10){

    vetor[cont]=numero%10;
    numero=numero/10;
    cont++;

}
vetor[cont]=numero;
c1=0;
while(c1<=cont){

    printf("%llu", vetor[c1]);
    c1++;
}

printf("\n");

return(0);
}
