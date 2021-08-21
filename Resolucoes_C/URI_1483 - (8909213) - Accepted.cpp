#include <stdio.h>

int main(){

unsigned long long int  aposta, resultado, apos[50], resu[50], a,r, cont1, cont2;
double total, valor;

valor=aposta=resultado=1;

while(valor!=0 || aposta!=0 || resultado !=0){

    scanf("%lf %llu %llu", &valor, &aposta, &resultado);

    if(valor!=0 || aposta!=0 || resultado !=0){
    a=aposta;
    r=resultado;
    total=0;
    cont1=0;
    cont2=0;
    while(a>=10){
        apos[cont1]=a%10;
        a=a/10;
        cont1++;
    }
    apos[cont1]=a;

    if(aposta<=99){
    apos[2]=apos[3]=0;
    }

    if(aposta<=9){
    apos[1]=apos[2]=apos[3]=0;
    }


    while(r>=10){
    resu[cont2]=r%10;
    r=r/10;
    cont2++;
    }
    resu[cont2]=r;

    if(resultado<=99){
    resu[2]=resu[3]=0;
    }

    if(resultado<=9){
    resu[1]=resu[2]=resu[3]=0;
    }


    if(resu[0]==apos[0]&&resu[1]==apos[1]&&resu[2]==apos[2]&&resu[3]==apos[3])
    {
        total=valor*3000;
    }

    if (resu[0]==apos[0]&&resu[1]==apos[1]&&resu[2]==apos[2]&& total==0)
    {
        total=valor*500;
    }

    if (resu[0]==apos[0]&&resu[1]==apos[1]&& total==0)
    {
        total=valor*50;
    }


    if (((resu[0]+10*resu[1]-1)/4==(apos[0]+10*apos[1]-1)/4)&& total==0)

    {
        total=valor*16;
    }


    printf("%.2lf\n", total);








    }
}
return(0);
}
