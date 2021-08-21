#include <stdio.h>

int main ()

{ float a[15][15], media, soma;
  int linha,c1,c2;
  char tipo[2];

  scanf("%d", &linha);
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
    while(c1<=11){soma=soma+a[linha][c1];c1++;}
    printf("%.1f\n",soma);

}

c1=0;
if(tipo[0]=='M')
{
    while(c1<=11){media=media+a[linha][c1];c1++;}
    printf("%.1f\n", media/12);

}







return(0);
}
