#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{   int estancias, resultado1, contador,invertido[33000], convertido, tamanho, contador2, reverso;
    unsigned long long int resultado2, soma, mult, decimal, decimal2,dh[30000],db[30000];
    char entrada[40000], tipo[5];

    contador=0;
    scanf("%d", &estancias);
    while(contador<estancias)
    { scanf("%s%s",entrada,tipo);
     printf("Case %d:\n",contador+1);

    if(tipo[0]=='h')
    {
     reverso=strlen(entrada)-1;
     contador2=0;

     while (reverso>=0)
     {
      if(entrada[reverso]=='0')invertido[contador2]=0;
      if(entrada[reverso]=='1')invertido[contador2]=1;
      if(entrada[reverso]=='2')invertido[contador2]=2;
      if(entrada[reverso]=='3')invertido[contador2]=3;
      if(entrada[reverso]=='4')invertido[contador2]=4;
      if(entrada[reverso]=='5')invertido[contador2]=5;
      if(entrada[reverso]=='6')invertido[contador2]=6;
      if(entrada[reverso]=='7')invertido[contador2]=7;
      if(entrada[reverso]=='8')invertido[contador2]=8;
      if(entrada[reverso]=='9')invertido[contador2]=9;
      if(entrada[reverso]=='a')invertido[contador2]=10;
      if(entrada[reverso]=='b')invertido[contador2]=11;
      if(entrada[reverso]=='c')invertido[contador2]=12;
      if(entrada[reverso]=='d')invertido[contador2]=13;
      if(entrada[reverso]=='e')invertido[contador2]=14;
      if(entrada[reverso]=='f')invertido[contador2]=15;
     contador2++;
     reverso--;
     }

     reverso=contador2-1;
     contador2=0;
     soma=0;
     mult=1;
     while (contador2<=reverso){
      resultado1= invertido[contador2];
      resultado2= (unsigned long long int)resultado1;
      soma=soma+mult*resultado2;

      mult=mult*16;
      contador2++;
     }
     decimal=soma;
     printf("%llu dec\n", decimal);


contador2=0;

     while(decimal>=2)
     {db[contador2]=decimal%2;
      decimal=decimal/2;
      contador2++;
     }
     contador2--;
     printf("%llu",decimal);
     while(contador2>=0){
     printf("%llu",db[contador2]);
     contador2--;
     }
printf(" bin\n");


    }




   if(tipo[0]=='b')

    {  reverso=strlen(entrada)-1;
     contador2=0;

     while (reverso>=0)
     {
      if(entrada[reverso]=='0')invertido[contador2]=0;
      if(entrada[reverso]=='1')invertido[contador2]=1;

     contador2++;
     reverso--;
     }
     reverso=contador2-1;
     contador2=0;
     soma=0;
     mult=1;
      while (contador2<=reverso){
      resultado1= invertido[contador2];
      resultado2= (unsigned long long int)resultado1;
      soma=soma+mult*resultado2;

      mult=mult*2;
      contador2++;
     }
    decimal=soma;

printf("%llu dec\n", decimal);
     decimal2=decimal;
     contador2=0;

     while(decimal2>=16)
     {dh[contador2]=decimal2%16;
      decimal2=decimal2/16;
      contador2++;
     }
     contador2--;

     if(decimal2>9){
        if(decimal2==10)printf("a");
            if(decimal2==11)printf("b");
               if(decimal2==12)printf("c");
                  if(decimal2==13)printf("d");
                     if(decimal2==14)printf("e");
                        if(decimal2==15)printf("f");}


     else printf("%llu",decimal2);






     while(contador2>=0){
     if(dh[contador2]>9){
        if(dh[contador2]==10)printf("a");
            if(dh[contador2]==11)printf("b");
               if(dh[contador2]==12)printf("c");
                  if(dh[contador2]==13)printf("d");
                     if(dh[contador2]==14)printf("e");
                        if(dh[contador2]==15)printf("f");



     }
     else printf("%llu",dh[contador2]);
     contador2--;
     }
printf(" hex\n");














    }








   if(tipo[0]=='d')

    {     reverso=strlen(entrada)-1;
     contador2=0;

     while (reverso>=0)
     {
      if(entrada[reverso]=='0')invertido[contador2]=0;
      if(entrada[reverso]=='1')invertido[contador2]=1;
      if(entrada[reverso]=='2')invertido[contador2]=2;
      if(entrada[reverso]=='3')invertido[contador2]=3;
      if(entrada[reverso]=='4')invertido[contador2]=4;
      if(entrada[reverso]=='5')invertido[contador2]=5;
      if(entrada[reverso]=='6')invertido[contador2]=6;
      if(entrada[reverso]=='7')invertido[contador2]=7;
      if(entrada[reverso]=='8')invertido[contador2]=8;
      if(entrada[reverso]=='9')invertido[contador2]=9;
     contador2++;
     reverso--;
     }

     reverso=contador2-1;
     contador2=0;
     soma=0;
     mult=1;
      while (contador2<=reverso){
      resultado1= invertido[contador2];
      resultado2= (unsigned long long int)resultado1;
      soma=soma+mult*resultado2;

      mult=mult*10;
      contador2++;
     }
     decimal=soma;
     decimal2=decimal;
     contador2=0;

     while(decimal2>=16)
     {dh[contador2]=decimal2%16;
      decimal2=decimal2/16;
      contador2++;
     }
     contador2--;

     if(decimal2>9){
        if(decimal2==10)printf("a");
            if(decimal2==11)printf("b");
               if(decimal2==12)printf("c");
                  if(decimal2==13)printf("d");
                     if(decimal2==14)printf("e");
                        if(decimal2==15)printf("f");}


     else printf("%llu",decimal2);





     while(contador2>=0){
     if(dh[contador2]>9){
        if(dh[contador2]==10)printf("a");
            if(dh[contador2]==11)printf("b");
               if(dh[contador2]==12)printf("c");
                  if(dh[contador2]==13)printf("d");
                     if(dh[contador2]==14)printf("e");
                        if(dh[contador2]==15)printf("f");



     }
     else printf("%llu",dh[contador2]);
     contador2--;
     }
printf(" hex\n");

contador2=0;

     while(decimal>=2)
     {db[contador2]=decimal%2;
      decimal=decimal/2;
      contador2++;
     }
     contador2--;
     printf("%llu",decimal);
     while(contador2>=0){
     printf("%llu",db[contador2]);
     contador2--;
     }
printf(" bin\n");









    }












printf("\n");
        contador++;
    }




return(0);
}
