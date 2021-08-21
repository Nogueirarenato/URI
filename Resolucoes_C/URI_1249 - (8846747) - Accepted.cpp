#include <stdio.h>
#include <string.h>


int main ()
{   int n, tamanho, cont, fim,M;
    char entrada[52];






while(gets(entrada)!=NULL){

    cont=0;
    tamanho=strlen(entrada)-1;
    n=0;
    while(cont<=tamanho){
    n=0;
        fim=0;
        M=0;
        while(fim==0){
        if(entrada[cont]=='a'){n=1; break;}
        if(entrada[cont]=='b'){n=2; break;}
        if(entrada[cont]=='c'){n=3; break;}
        if(entrada[cont]=='d'){n=4; break;}
        if(entrada[cont]=='e'){n=5; break;}
        if(entrada[cont]=='f'){n=6; break;}
        if(entrada[cont]=='g'){n=7; break;}
        if(entrada[cont]=='h'){n=8; break;}
        if(entrada[cont]=='i'){n=9; break;}
        if(entrada[cont]=='j'){n=10; break;}
        if(entrada[cont]=='k'){n=11; break;}
        if(entrada[cont]=='l'){n=12; break;}
        if(entrada[cont]=='m'){n=13; break;}
        if(entrada[cont]=='n'){n=14; break;}
        if(entrada[cont]=='o'){n=15; break;}
        if(entrada[cont]=='p'){n=16; break;}
        if(entrada[cont]=='q'){n=17; break;}
        if(entrada[cont]=='r'){n=18; break;}
        if(entrada[cont]=='s'){n=19; break;}
        if(entrada[cont]=='t'){n=20; break;}
        if(entrada[cont]=='u'){n=21; break;}
        if(entrada[cont]=='v'){n=22; break;}
        if(entrada[cont]=='w'){n=23; break;}
        if(entrada[cont]=='x'){n=24; break;}
        if(entrada[cont]=='y'){n=25; break;}
        if(entrada[cont]=='z'){n=26; break;M=1;}
        if(entrada[cont]=='A'){n=1;M=1; break;M=1;}
        if(entrada[cont]=='B'){n=2;M=1; break;M=1;}
        if(entrada[cont]=='C'){n=3;M=1; break;M=1;}
        if(entrada[cont]=='D'){n=4;M=1; break;M=1;}
        if(entrada[cont]=='E'){n=5;M=1; break;M=1;}
        if(entrada[cont]=='F'){n=6;M=1; break;M=1;}
        if(entrada[cont]=='G'){n=7;M=1; break;M=1;}
        if(entrada[cont]=='H'){n=8;M=1; break;M=1;}
        if(entrada[cont]=='I'){n=9;M=1; break;M=1;}
        if(entrada[cont]=='J'){n=10;M=1; break;M=1;}
        if(entrada[cont]=='K'){n=11;M=1; break;M=1;}
        if(entrada[cont]=='L'){n=12;M=1; break;M=1;}
        if(entrada[cont]=='M'){n=13;M=1; break;M=1;}
        if(entrada[cont]=='N'){n=14;M=1; break;M=1;}
        if(entrada[cont]=='O'){n=15;M=1; break;M=1;}
        if(entrada[cont]=='P'){n=16;M=1; break;M=1;}
        if(entrada[cont]=='Q'){n=17;M=1; break;M=1;}
        if(entrada[cont]=='R'){n=18;M=1; break;M=1;}
        if(entrada[cont]=='S'){n=19;M=1; break;M=1;}
        if(entrada[cont]=='T'){n=20;M=1; break;M=1;}
        if(entrada[cont]=='U'){n=21;M=1; break;M=1;}
        if(entrada[cont]=='V'){n=22;M=1; break;M=1;}
        if(entrada[cont]=='W'){n=23;M=1; break;M=1;}
        if(entrada[cont]=='X'){n=24;M=1; break;M=1;}
        if(entrada[cont]=='Y'){n=25;M=1; break;M=1;}
        if(entrada[cont]=='Z'){n=26;M=1; break;M=1;}
        fim++;}


        while(fim==0){
        n=n+13;
        n=n%26;
        if(M==0){
        if(n==1){entrada[cont]='a';break;}
        if(n==2){entrada[cont]='b';break;}
        if(n==3){entrada[cont]='c';break;}
        if(n==4){entrada[cont]='d';break;}
        if(n==5){entrada[cont]='e';break;}
        if(n==6){entrada[cont]='f';break;}
        if(n==7){entrada[cont]='g';break;}
        if(n==8){entrada[cont]='h';break;}
        if(n==9){entrada[cont]='i';break;}
        if(n==10){entrada[cont]='j';break;}
        if(n==11){entrada[cont]='k';break;}
        if(n==12){entrada[cont]='l';break;}
        if(n==13){entrada[cont]='m';break;}
        if(n==14){entrada[cont]='n';break;}
        if(n==15){entrada[cont]='o';break;}
        if(n==16){entrada[cont]='p';break;}
        if(n==17){entrada[cont]='q';break;}
        if(n==18){entrada[cont]='r';break;}
        if(n==19){entrada[cont]='s';break;}
        if(n==20){entrada[cont]='t';break;}
        if(n==21){entrada[cont]='u';break;}
        if(n==22){entrada[cont]='v';break;}
        if(n==23){entrada[cont]='w';break;}
        if(n==24){entrada[cont]='x';break;}
        if(n==25){entrada[cont]='y';break;}
        if(n==0){entrada[cont]='z';break;}
        }
        else{
        if(n==1){entrada[cont]='A';break;}
        if(n==2){entrada[cont]='B';break;}
        if(n==3){entrada[cont]='C';break;}
        if(n==4){entrada[cont]='D';break;}
        if(n==5){entrada[cont]='E';break;}
        if(n==6){entrada[cont]='F';break;}
        if(n==7){entrada[cont]='G';break;}
        if(n==8){entrada[cont]='H';break;}
        if(n==9){entrada[cont]='I';break;}
        if(n==10){entrada[cont]='J';break;}
        if(n==11){entrada[cont]='K';break;}
        if(n==12){entrada[cont]='L';break;}
        if(n==13){entrada[cont]='M';break;}
        if(n==14){entrada[cont]='N';break;}
        if(n==15){entrada[cont]='O';break;}
        if(n==16){entrada[cont]='P';break;}
        if(n==17){entrada[cont]='Q';break;}
        if(n==18){entrada[cont]='R';break;}
        if(n==19){entrada[cont]='S';break;}
        if(n==20){entrada[cont]='T';break;}
        if(n==21){entrada[cont]='U';break;}
        if(n==22){entrada[cont]='V';break;}
        if(n==23){entrada[cont]='W';break;}
        if(n==24){entrada[cont]='X';break;}
        if(n==25){entrada[cont]='Y';break;}
        if(n==0){entrada[cont]='Z';break;}}


        }

        printf("%c", entrada[cont]);
































    cont++;
    }

    printf("\n");

}






return(0);
}
