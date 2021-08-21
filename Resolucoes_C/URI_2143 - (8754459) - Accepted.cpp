#include <stdio.h>

int main ()
{int cont, estancias, pessoas;

cont=0;

scanf("%d", &estancias);
while(estancias!=0){
while(cont<estancias){


    scanf("%d", &pessoas);

    if(pessoas%2==1)pessoas=pessoas*2-1;
    if(pessoas%2==0)pessoas=pessoas*2-2;
    printf("%d\n", pessoas);








    cont++;
}



scanf("%d", &estancias);
cont=0;

}

    return(0);
}
