#include <stdio.h>
#include<math.h>
int main()
{  int favor, contrario, cont, estancias, c1, votos;
   double prop,f , c;

    cont=0;

    while(scanf("%d", &estancias)!=EOF){
    contrario=0;
    favor=0;
    while(cont<estancias){

    scanf("%d", &votos);

    if(votos==1)favor++;
    else contrario++;

    cont++;
    }

    f=(double)favor;
    c=(double)contrario;


    if(contrario==0){printf("impeachment\n");}
    else {prop=f/(c+f);
//printf("favor= %d f= %lf contrario= %d c= %lf prop= %lf\n", favor, f, contrario, c, prop);

    if(prop>=0.6666)printf("impeachment\n");
    else printf("acusacao arquivada\n");}




    cont=0;
    }



return(0);
}


