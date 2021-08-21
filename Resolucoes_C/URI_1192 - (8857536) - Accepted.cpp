#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{ int a, b, cont, estancias, soma,flag, j;
char letra[10];

a=1;
b=1;
soma=1;
flag=0;
j=1;
cont=0;
scanf("%i", &estancias);

while(cont<estancias)
{   scanf("%s",&letra);

    flag=0;
    j=1;
    if(letra[0]=='0')a=0;
    if(letra[0]=='1')a=1;
    if(letra[0]=='2')a=2;
    if(letra[0]=='3')a=3;
    if(letra[0]=='4')a=4;
    if(letra[0]=='5')a=5;
    if(letra[0]=='6')a=6;
    if(letra[0]=='7')a=7;
    if(letra[0]=='8')a=8;
    if(letra[0]=='9')a=9;


    if(letra[2]=='0')b=0;
    if(letra[2]=='1')b=1;
    if(letra[2]=='2')b=2;
    if(letra[2]=='3')b=3;
    if(letra[2]=='4')b=4;
    if(letra[2]=='5')b=5;
    if(letra[2]=='6')b=6;
    if(letra[2]=='7')b=7;
    if(letra[2]=='8')b=8;
    if(letra[2]=='9')b=9;


    if(a==b){soma=a*b;}


    else{

    while(j<=1){

      if(letra[1]=='a'){flag++;}
      if(letra[1]=='b'){flag++;}
      if(letra[1]=='c'){flag++;}
      if(letra[1]=='d'){flag++;}
      if(letra[1]=='e'){flag++;}
      if(letra[1]=='f'){flag++;}
      if(letra[1]=='g'){flag++;}
      if(letra[1]=='h'){flag++;}
      if(letra[1]=='i'){flag++;}
      if(letra[1]=='j'){flag++;}
      if(letra[1]=='k'){flag++;}
      if(letra[1]=='l'){flag++;}
      if(letra[1]=='m'){flag++;}
      if(letra[1]=='n'){flag++;}
      if(letra[1]=='o'){flag++;}
      if(letra[1]=='p'){flag++;}
      if(letra[1]=='q'){flag++;}
      if(letra[1]=='r'){flag++;}
      if(letra[1]=='s'){flag++;}
      if(letra[1]=='t'){flag++;}
      if(letra[1]=='u'){flag++;}
      if(letra[1]=='v'){flag++;}
      if(letra[1]=='w'){flag++;}
      if(letra[1]=='x'){flag++;}
      if(letra[1]=='y'){flag++;}
      if(letra[1]=='z'){flag++;}
      j++;
        if(flag==0)soma=b-a;
        else soma=a+b;

    }}




    printf("%i\n", soma);
    flag=0;




    cont++;
}

return(0);
}
