#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{ int m[100][100], n, cont1, cont2, j, i;


while(scanf("%d", &n)!=EOF)
{
    i=n;
    j=n;


     cont1=0;
    cont2=0;
    while(cont2<i){

        while(cont1<j){

                m[cont2][cont1]=3;

        cont1++;
        }




    cont1=0;
    cont2++;
    }


    cont1=0;
    cont2=0;
    while(cont2<i){


                m[cont2][cont1]=1;

    cont1++;
    cont2++;
    }


    cont1=j-1;
    cont2=0;
    while(cont2<i){


                m[cont2][cont1]=2;

    cont1--;
    cont2++;
    }










    cont1=0;
    cont2=0;
    while(cont2<i){

        while(cont1<j){

                printf("%d", m[cont2][cont1]);

        cont1++;
        }



    printf("\n");
    cont1=0;
    cont2++;
    }









}



return(0);
}
