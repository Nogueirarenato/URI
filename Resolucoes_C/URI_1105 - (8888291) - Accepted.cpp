#include <stdio.h>


    int main()
    {long long int estancias, cont,credor,valor,devedor,nbanco, banco[50], flag;



        nbanco=1;
        estancias=1;

        while (nbanco!=0 || estancias !=0){

        scanf("%lli %lli", &nbanco, &estancias);



    if(nbanco!=0 || estancias !=0){
    flag=0;
    cont=1;

    while(cont<=nbanco){
    scanf("%lli", &banco[cont]);
    cont++;
    }

    cont=0;

    while(cont<estancias){
    scanf("%lli %lli %lli", &devedor, &credor, &valor);
    banco[devedor]=banco[devedor]-valor;
    banco[credor]=banco[credor]+valor;

   // printf("banco1=%lli  banco2=%lli banco3=%lli \n", banco[1],banco[2], banco[3]);

    cont++;
    }
    cont=1;


    while(cont<=nbanco){

    if(banco[cont]<0)flag++;

    cont++;

    }

    if(flag==0)printf("S\n");
    else printf("N\n");



    }
        }


  return(0);
    }



