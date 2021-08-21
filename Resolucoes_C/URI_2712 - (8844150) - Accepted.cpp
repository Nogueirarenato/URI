#include <stdio.h>
#include <string.h>


int main ()
{ char placa[20];
  int tamanho, falha, estancias, cont, padrao,ok, fim;
cont=0;
padrao=8;
scanf("%d", &estancias);
while(cont<estancias){

    falha=0;
    ok=0;
    fim=0;
    scanf("%s", &placa);
    tamanho=strlen(placa);
    if(tamanho!=padrao)falha++;

    if(falha==0){

    while(fim==0){
    if(placa[0]=='A'){ok++;fim++;break;}
    if(placa[0]=='B'){ok++;fim++;break;}
    if(placa[0]=='C'){ok++;fim++;break;}
    if(placa[0]=='D'){ok++;fim++;break;}
    if(placa[0]=='E'){ok++;fim++;break;}
    if(placa[0]=='F'){ok++;fim++;break;}
    if(placa[0]=='G'){ok++;fim++;break;}
    if(placa[0]=='H'){ok++;fim++;break;}
    if(placa[0]=='I'){ok++;fim++;break;}
    if(placa[0]=='J'){ok++;fim++;break;}
    if(placa[0]=='K'){ok++;fim++;break;}
    if(placa[0]=='L'){ok++;fim++;break;}
    if(placa[0]=='M'){ok++;fim++;break;}
    if(placa[0]=='N'){ok++;fim++;break;}
    if(placa[0]=='O'){ok++;fim++;break;}
    if(placa[0]=='P'){ok++;fim++;break;}
    if(placa[0]=='Q'){ok++;fim++;break;}
    if(placa[0]=='R'){ok++;fim++;break;}
    if(placa[0]=='S'){ok++;fim++;break;}
    if(placa[0]=='T'){ok++;fim++;break;}
    if(placa[0]=='U'){ok++;fim++;break;}
    if(placa[0]=='V'){ok++;fim++;break;}
    if(placa[0]=='X'){ok++;fim++;break;}
    if(placa[0]=='Y'){ok++;fim++;break;}
    if(placa[0]=='W'){ok++;fim++;break;}
    if(placa[0]=='Z'){ok++;fim++;break;}
    fim++;
    }

    if(ok==0)falha++;
    else fim=0;
    ok=0;

    while(fim==0){
    if(placa[1]=='A'){ok++;fim++;break;}
    if(placa[1]=='B'){ok++;fim++;break;}
    if(placa[1]=='C'){ok++;fim++;break;}
    if(placa[1]=='D'){ok++;fim++;break;}
    if(placa[1]=='E'){ok++;fim++;break;}
    if(placa[1]=='F'){ok++;fim++;break;}
    if(placa[1]=='G'){ok++;fim++;break;}
    if(placa[1]=='H'){ok++;fim++;break;}
    if(placa[1]=='I'){ok++;fim++;break;}
    if(placa[1]=='J'){ok++;fim++;break;}
    if(placa[1]=='K'){ok++;fim++;break;}
    if(placa[1]=='L'){ok++;fim++;break;}
    if(placa[1]=='M'){ok++;fim++;break;}
    if(placa[1]=='N'){ok++;fim++;break;}
    if(placa[1]=='O'){ok++;fim++;break;}
    if(placa[1]=='P'){ok++;fim++;break;}
    if(placa[1]=='Q'){ok++;fim++;break;}
    if(placa[1]=='R'){ok++;fim++;break;}
    if(placa[1]=='S'){ok++;fim++;break;}
    if(placa[1]=='T'){ok++;fim++;break;}
    if(placa[1]=='U'){ok++;fim++;break;}
    if(placa[1]=='V'){ok++;fim++;break;}
    if(placa[1]=='X'){ok++;fim++;break;}
    if(placa[1]=='Y'){ok++;fim++;break;}
    if(placa[1]=='W'){ok++;fim++;break;}
    if(placa[1]=='Z'){ok++;fim++;break;}
    fim++;
    }

    if(ok==0)falha++;
    else fim=0;
    ok=0;

     while(fim==0){
    if(placa[2]=='A'){ok++;fim++;break;}
    if(placa[2]=='B'){ok++;fim++;break;}
    if(placa[2]=='C'){ok++;fim++;break;}
    if(placa[2]=='D'){ok++;fim++;break;}
    if(placa[2]=='E'){ok++;fim++;break;}
    if(placa[2]=='F'){ok++;fim++;break;}
    if(placa[2]=='G'){ok++;fim++;break;}
    if(placa[2]=='H'){ok++;fim++;break;}
    if(placa[2]=='I'){ok++;fim++;break;}
    if(placa[2]=='J'){ok++;fim++;break;}
    if(placa[2]=='K'){ok++;fim++;break;}
    if(placa[2]=='L'){ok++;fim++;break;}
    if(placa[2]=='M'){ok++;fim++;break;}
    if(placa[2]=='N'){ok++;fim++;break;}
    if(placa[2]=='O'){ok++;fim++;break;}
    if(placa[2]=='P'){ok++;fim++;break;}
    if(placa[2]=='Q'){ok++;fim++;break;}
    if(placa[2]=='R'){ok++;fim++;break;}
    if(placa[2]=='S'){ok++;fim++;break;}
    if(placa[2]=='T'){ok++;fim++;break;}
    if(placa[2]=='U'){ok++;fim++;break;}
    if(placa[2]=='V'){ok++;fim++;break;}
    if(placa[2]=='X'){ok++;fim++;break;}
    if(placa[2]=='Y'){ok++;fim++;break;}
    if(placa[2]=='W'){ok++;fim++;break;}
    if(placa[2]=='Z'){ok++;fim++;break;}
    fim++;
    }

    if(ok==0)falha++;
    else fim=0;
    ok=0;

    if(placa[3]!='-')falha++;


     while(fim==0){
    if(placa[4]=='0'){ok++;fim++;break;}
    if(placa[4]=='1'){ok++;fim++;break;}
    if(placa[4]=='2'){ok++;fim++;break;}
    if(placa[4]=='3'){ok++;fim++;break;}
    if(placa[4]=='4'){ok++;fim++;break;}
    if(placa[4]=='5'){ok++;fim++;break;}
    if(placa[4]=='6'){ok++;fim++;break;}
    if(placa[4]=='7'){ok++;fim++;break;}
    if(placa[4]=='8'){ok++;fim++;break;}
    if(placa[4]=='9'){ok++;fim++;break;}
    fim++;
    }


      if(ok==0)falha++;
    else fim=0;
    ok=0;



     while(fim==0){
    if(placa[5]=='0'){ok++;fim++;break;}
    if(placa[5]=='1'){ok++;fim++;break;}
    if(placa[5]=='2'){ok++;fim++;break;}
    if(placa[5]=='3'){ok++;fim++;break;}
    if(placa[5]=='4'){ok++;fim++;break;}
    if(placa[5]=='5'){ok++;fim++;break;}
    if(placa[5]=='6'){ok++;fim++;break;}
    if(placa[5]=='7'){ok++;fim++;break;}
    if(placa[5]=='8'){ok++;fim++;break;}
    if(placa[5]=='9'){ok++;fim++;break;}
    fim++;
    }



      if(ok==0)falha++;
    else fim=0;
    ok=0;



     while(fim==0){
    if(placa[6]=='0'){ok++;fim++;break;}
    if(placa[6]=='1'){ok++;fim++;break;}
    if(placa[6]=='2'){ok++;fim++;break;}
    if(placa[6]=='3'){ok++;fim++;break;}
    if(placa[6]=='4'){ok++;fim++;break;}
    if(placa[6]=='5'){ok++;fim++;break;}
    if(placa[6]=='6'){ok++;fim++;break;}
    if(placa[6]=='7'){ok++;fim++;break;}
    if(placa[6]=='8'){ok++;fim++;break;}
    if(placa[6]=='9'){ok++;fim++;break;}
    fim++;
    }
         if(ok==0)falha++;
    else fim=0;
    ok=0;



     while(fim==0){
    if(placa[7]=='0'){ok++;fim++;break;}
    if(placa[7]=='1'){ok++;fim++;break;}
    if(placa[7]=='2'){ok++;fim++;break;}
    if(placa[7]=='3'){ok++;fim++;break;}
    if(placa[7]=='4'){ok++;fim++;break;}
    if(placa[7]=='5'){ok++;fim++;break;}
    if(placa[7]=='6'){ok++;fim++;break;}
    if(placa[7]=='7'){ok++;fim++;break;}
    if(placa[7]=='8'){ok++;fim++;break;}
    if(placa[7]=='9'){ok++;fim++;break;}
    fim++;
    }

         if(ok==0)falha++;









    }

  if(falha==0){

        if(placa[7]=='1' || placa[7]=='2')printf("MONDAY\n");
        if(placa[7]=='3' || placa[7]=='4')printf("TUESDAY\n");
        if(placa[7]=='5' || placa[7]=='6')printf("WEDNESDAY\n");
        if(placa[7]=='7' || placa[7]=='8')printf("THURSDAY\n");
        if(placa[7]=='9' || placa[7]=='0')printf("FRIDAY\n");
    }

    else printf("FAILURE\n");







    cont++;
}





return(0);
}
