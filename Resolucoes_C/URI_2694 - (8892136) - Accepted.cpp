#include <stdio.h>

int main()
{

long long int cont, estancias,c2,c3, v[30], soma, multi;
char numeros[20];


cont=0;
scanf("%lli", &estancias);
while(cont<estancias){

scanf("%s", &numeros);


c2=0;
c3=0;
soma=0;
while(c2<=13){

if(numeros[c2]>='0' && numeros[c2] <='9')
    {
    if(numeros[c2]=='0'){v[c3]=0; c3++,c2++;continue;}
    if(numeros[c2]=='1'){v[c3]=1; c3++,c2++;continue;}
    if(numeros[c2]=='2'){v[c3]=2; c3++,c2++;continue;}
    if(numeros[c2]=='3'){v[c3]=3; c3++,c2++;continue;}
    if(numeros[c2]=='4'){v[c3]=4; c3++,c2++;continue;}
    if(numeros[c2]=='5'){v[c3]=5; c3++,c2++;continue;}
    if(numeros[c2]=='6'){v[c3]=6; c3++,c2++;continue;}
    if(numeros[c2]=='7'){v[c3]=7; c3++,c2++;continue;}
    if(numeros[c2]=='8'){v[c3]=8; c3++,c2++;continue;}
    if(numeros[c2]=='9'){v[c3]=9; c3++,c2++;continue;}

    }
else{v[c3]=13;c3++; c2++;}

 }


c2=0;

c3--;
soma=0;
multi=1;

while(v[c3]==13)
{
    c3--;
}


while(v[c3]<=9)
{
    soma=soma+multi*v[c3];
    multi=multi*10;
   // printf("soma=%d\n", soma);
    c3--;
}


multi=1;

while(v[c3]==13)
{
    c3--;
}

while(v[c3]<=9)
{
    soma=soma+multi*v[c3];
    multi=multi*10;
    c3--;

    //printf("soma=%d\n", soma);
}

multi=1;

while(v[c3]==13)
{
    c3--;
}

while(v[c3]<=9)
{
    soma=soma+multi*v[c3];
    multi=multi*10;
    c3--;
    if(c3==-1)break;
}

printf("%lli\n", soma);


cont++;
}

return(0);
}
