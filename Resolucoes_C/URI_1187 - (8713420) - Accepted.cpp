#include <stdio.h>

int main ()

{ double a[15][15], media, soma;
  int linha,c1,c2,c3;
  char tipo[2];

  scanf("%s", &tipo);
  c1=0;
  c2=0;
  while(c1<=11){

        while(c2<=11){
                        scanf("%lf", &a[c1][c2]);

                    c2++;
        }

    c2=0;
    c1++;
  }




if(tipo[0]=='S')
{
soma=a[0][1]+a[0][2]+a[0][3]+a[0][4]+a [ 0 ] [ 5 ] +
a [ 0 ] [ 6 ] +
a [ 0 ] [ 7 ] +
a [ 0 ] [ 8 ] +
a [ 0 ] [ 9 ] +
a [ 0 ] [ 10 ] +
a [ 1 ] [ 2 ] +
a [ 1 ] [ 3 ] +
a [ 1 ] [ 4 ] +
a [ 1 ] [ 5 ] +
a [ 1 ] [ 6 ] +
a [ 1 ] [ 7 ] +
a [ 1 ] [ 8 ] +
a [ 1 ] [ 9 ] +
a [ 2 ] [ 3 ] +
a [ 2 ] [ 4 ] +
a [ 2 ] [ 5 ] +
a [ 2 ] [ 6 ] +
a [ 2 ] [ 7 ] +
a [ 2 ] [ 8 ] +
a [ 3 ] [ 4 ] +
a [ 3 ] [ 5 ] +
a [ 3 ] [ 6 ] +
a [ 3 ] [ 7 ] +
a [ 4 ] [ 5 ] +
a [ 4 ] [ 6 ];


    printf("%.1lf\n",soma);
  }





c1=0;
if(tipo[0]=='M')
{soma=a [ 0 ] [ 1 ] +
a [ 0 ] [ 2 ] +
a [ 0 ] [ 3 ] +
a [ 0 ] [ 4 ] +
a [ 0 ] [ 5 ] +
a [ 0 ] [ 6 ] +
a [ 0 ] [ 7 ] +
a [ 0 ] [ 8 ] +
a [ 0 ] [ 9 ] +
a [ 0 ] [ 10 ] +
a [ 1 ] [ 2 ] +
a [ 1 ] [ 3 ] +
a [ 1 ] [ 4 ] +
a [ 1 ] [ 5 ] +
a [ 1 ] [ 6 ] +
a [ 1 ] [ 7 ] +
a [ 1 ] [ 8 ] +
a [ 1 ] [ 9 ] +
a [ 2 ] [ 3 ] +
a [ 2 ] [ 4 ] +
a [ 2 ] [ 5 ] +
a [ 2 ] [ 6 ] +
a [ 2 ] [ 7 ] +
a [ 2 ] [ 8 ] +
a [ 3 ] [ 4 ] +
a [ 3 ] [ 5 ] +
a [ 3 ] [ 6 ] +
a [ 3 ] [ 7 ] +
a [ 4 ] [ 5 ] +
a [ 4 ] [ 6 ];




    printf("%.1lf\n",soma/30);


}

















return(0);
}
