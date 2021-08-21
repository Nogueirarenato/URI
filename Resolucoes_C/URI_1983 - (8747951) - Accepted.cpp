#include <stdio.h>
#include <math.h>

int main ()

{ int cont, aluno[120], max, i, pos;
  float nota[120];


scanf("%d", &cont);

i=cont-1;

while(i>=0){scanf("%d %f", &aluno[i], &nota[i]); i--;}

nota[cont]=0;
aluno[cont]=0;
i=0;
max=nota[0];
pos=0;

while(i<=cont+1)

{
    if(nota[i+1]>nota[i]&&nota[i+1]>max){max=nota[i+1]; pos=i+1;}
  

    i++;

}


if(nota[pos]<8)printf("Minimum note not reached\n");
else printf("%d\n",aluno[pos]);





return(0);
}
