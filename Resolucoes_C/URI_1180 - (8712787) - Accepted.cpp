#include <stdio.h>

int main ()

{ int vetor[1000], tamanho, contador, c1, c2, menor, posi;

scanf("%d", &tamanho);

contador=0;

while(contador<tamanho){

    scanf("%d", &vetor[contador]);
    contador++;
}




c1=0;
c2=0;

menor=25000;
posi=1;
while(c1<tamanho){

    while(c2<tamanho){


        if(vetor[c1]<=vetor[c2]&&vetor[c1]<=menor){menor=vetor[c1]; posi=c1;}

    c2++;
    }

    c2=0;
    c1++;
}


printf("Menor valor: %d\n", menor);
printf("Posicao: %d\n", posi);




return(0);
}
