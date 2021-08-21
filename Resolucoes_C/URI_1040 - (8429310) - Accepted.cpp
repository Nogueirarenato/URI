#include<stdio.h>

int main ()
{ float p1,p2,p3,p4,media,exame;
scanf("%f%f%f%f", &p1,&p2,&p3,&p4);

media=(2*p1+3*p2+4*p3+p4)/10;

if(media>=7.000)printf("Media: %.1f\nAluno aprovado.\n",media);
if(media<5.000)printf("Media: %.1f\nAluno reprovado.\n",media);

if(media>=5.00&&media<=6.99)
{printf("Media: %.1f\nAluno em exame.\n",media);
scanf("%f",&exame);
printf("Nota do exame: %.1f\n", exame);
media=(media+exame)/2;
if(media>=5.000)printf("Aluno aprovado.\nMedia final: %.1f\n",media);
if(media<5.000)printf("Aluno reprovado.\nMedia final: %.1f\n",media);
}



    return(0);
}
