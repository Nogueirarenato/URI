#include <stdio.h>
#include <math.h>

int main ()

{

long long int c1,c2,c3,entrada, quantidade, cg;

cg=1;

while(scanf("%llu",&entrada)!=EOF)


{
    quantidade=1;
    c1=entrada;


    if(entrada==0){printf("Caso %llu: 1 numero\n0\n\n",cg);}

    else{while(c1>=0){quantidade=quantidade+c1;c1--;}
    printf("Caso %llu: %llu numeros\n", cg, quantidade);

    c1=entrada;
    c2=1;
    c3=1 ;
    printf("0 ");
    while(c2<=c1){

        while(c3<=c2){




                    if(c3==entrada)printf ("%llu",c2);
                    else printf("%llu ",c2);


                    c3++;
        }

    c3=1;
    c2++;
    }

    printf("\n");
    printf("\n");








    }


 cg++;
}



return(0);
}
