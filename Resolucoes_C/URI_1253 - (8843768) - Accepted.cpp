#include <stdio.h>
#include <string.h>


int main ()
{ int tamanho, cont, cont2,cont3,estancias, delta,flag, n;
char letras[60];

cont=0;
scanf("%d", &estancias);

while(cont<estancias){

    scanf("%s", letras);
    scanf("%d", &delta);
    tamanho=strlen(letras)-1;
    cont2=0;
    cont3=0;
    flag=0;
    while(cont3<=tamanho){
    flag=0;
    n=0;
    while(flag==0){
    if(letras[cont2]=='A'){n=27 ;flag++;continue;}
    if(letras[cont2]=='B'){n=28 ;flag++;continue;}
    if(letras[cont2]=='C'){n=29 ;flag++;continue;}
    if(letras[cont2]=='D'){n=30 ;flag++;continue;}
    if(letras[cont2]=='E'){n=31 ;flag++;continue;}
    if(letras[cont2]=='F'){n=32 ;flag++;continue;}
    if(letras[cont2]=='G'){n=33 ;flag++;continue;}
    if(letras[cont2]=='H'){n=34 ;flag++;continue;}
    if(letras[cont2]=='I'){n=35 ;flag++;continue;}
    if(letras[cont2]=='J'){n=36 ;flag++;continue;}
    if(letras[cont2]=='K'){n=37 ;flag++;continue;}
    if(letras[cont2]=='L'){n=38 ;flag++;continue;}
    if(letras[cont2]=='M'){n=39 ;flag++;continue;}
    if(letras[cont2]=='N'){n=40 ;flag++;continue;}
    if(letras[cont2]=='O'){n=41 ;flag++;continue;}
    if(letras[cont2]=='P'){n=42 ;flag++;continue;}
    if(letras[cont2]=='Q'){n=43 ;flag++;continue;}
    if(letras[cont2]=='R'){n=44 ;flag++;continue;}
    if(letras[cont2]=='S'){n=45 ;flag++;continue;}
    if(letras[cont2]=='T'){n=46 ;flag++;continue;}
    if(letras[cont2]=='U'){n=47 ;flag++;continue;}
    if(letras[cont2]=='V'){n=48 ;flag++;continue;}
    if(letras[cont2]=='W'){n=49 ;flag++;continue;}
    if(letras[cont2]=='X'){n=50 ;flag++;continue;}
    if(letras[cont2]=='Y'){n=51 ;flag++;continue;}
    if(letras[cont2]=='Z'){n=52 ;flag++;continue;}}
    cont2++;

    flag=0;
    n=n-delta;


    while(flag==0){
    if(n%26==1){printf("A");flag++;break;}
    if(n%26==2){printf("B");flag++;break;}
    if(n%26==3){printf("C");flag++;break;}
    if(n%26==4){printf("D");flag++;break;}
    if(n%26==5){printf("E");flag++;break;}
    if(n%26==6){printf("F");flag++;break;}
    if(n%26==7){printf("G");flag++;break;}
    if(n%26==8){printf("H");flag++;break;}
    if(n%26==9){printf("I");flag++;break;}
    if(n%26==10){printf("J");flag++;break;}
    if(n%26==11){printf("K");flag++;break;}
    if(n%26==12){printf("L");flag++;break;}
    if(n%26==13){printf("M");flag++;break;}
    if(n%26==14){printf("N");flag++;break;}
    if(n%26==15){printf("O");flag++;break;}
    if(n%26==16){printf("P");flag++;break;}
    if(n%26==17){printf("Q");flag++;break;}
    if(n%26==18){printf("R");flag++;break;}
    if(n%26==19){printf("S");flag++;break;}
    if(n%26==20){printf("T");flag++;break;}
    if(n%26==21){printf("U");flag++;break;}
    if(n%26==22){printf("V");flag++;break;}
    if(n%26==23){printf("W");flag++;break;}
    if(n%26==24){printf("X");flag++;break;}
    if(n%26==25){printf("Y");flag++;break;}
    if(n%26==0){printf("Z");flag++;break;}













    }
    cont3++;
    }



printf("\n");

    cont++;
}







return(0);
}
