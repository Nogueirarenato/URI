#include <stdio.h>
#include<math.h>
#include <string.h>


int main()
{int cont, estancias, posicao;
char stt[50];

while(scanf("%s", &stt)!=EOF){

    cont=0;
    scanf("%d", &estancias);

    while(cont<estancias){

    scanf("%d", &posicao);
    printf("%c", stt[posicao-1]);



    cont++;
    }
    printf("\n");
    cont=0;










}








return(0);
}


