#include <stdio.h>

int main ()

{ float a[15][15], media, soma;
  int linha,c1,c2;
  char tipo[2];

  scanf("%s", &tipo);
  c1=0;
  c2=0;
  while(c1<=11){

        while(c2<=11){
                        scanf("%f", &a[c1][c2]);

                    c2++;
        }

    c2=0;
    c1++;
  }



soma=0;
media=0;
c1=0;
if(tipo[0]=='S')
{
      while(c1<=11){

        while(c2<=11){
                        if(c1>c2)soma=soma+a[c1][c2];

                    c2++;
        }

    c2=0;
    c1++;
  }
    printf("%.1f\n", soma);

}

c1=0;
if(tipo[0]=='M')
{
      while(c1<=11){

        while(c2<=11){
                        if(c1>c2)media=media+a[c1][c2];

                    c2++;
        }

    c2=0;
    c1++;
  }
    printf("%.1f\n", media/66);

}







return(0);
}
