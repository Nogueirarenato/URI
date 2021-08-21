#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{ int cont, estancias, numero, alunos, vetor[200], posicao, diferenca[200], i, minimo;

cont=0;
scanf("%d", &estancias);

while(cont<estancias){


    scanf("%d %d", &alunos, &numero);
    i=1;
    while(i<=alunos){

    scanf("%d", &vetor[i]);
    i++;
    }

    i=1;
    while(i<=alunos){

    diferenca[i]=abs(vetor[i]-numero);
    i++;
    }

i=alunos;
minimo=diferenca[i];
posicao=i;
diferenca[0]=32767;
while(i>0){

    if(diferenca[i-1]<=diferenca[i]&& diferenca[i-1]<=minimo){minimo=diferenca[i-1];posicao=i-1;}
    i--;

}



i=alunos;
while(i>0){

    if(diferenca[i]==0)posicao=i;
    i--;

}

printf("%d\n", posicao);


    cont++;
}




return(0);
}
