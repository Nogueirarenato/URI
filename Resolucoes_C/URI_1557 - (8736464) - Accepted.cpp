#include <stdio.h>

int main()
{ int m[20][20], cont1, cont2,a,n,j;
a=1;

while(a!=0){

    scanf("%d",&a);

    if(a!=0){

    m[0][0]=1;
    cont2=1;
    while(cont2<a){
                    m[cont2][0]=m[cont2-1][0]*2;
                    cont2++;
    }



cont1=0;
cont2=1;

    while(cont1<a){

        while(cont2<a){

                        m[cont1][cont2]=m[cont1][cont2-1]*2;

                        cont2++;
        }


    cont2=1;

    cont1++;
    }

n=1;
j=m[a-1][a-1];
while(j>=10){
    j=j/10;
    n++;
}

cont1=0;
cont2=0;

    while(cont1<a){

        while(cont2<a){


                        if(cont2==a-1)printf("%*d\n", n, m[cont1][cont2]);
                        else printf("%*d ", n, m[cont1][cont2]);
                        cont2++;
        }


    cont2=0;
    cont1++;
    }





    }
    if(a!=0)printf("\n");
}






  return(0);
}
