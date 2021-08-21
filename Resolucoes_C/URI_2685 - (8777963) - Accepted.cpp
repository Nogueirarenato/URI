#include <stdio.h>

int main()
{ int graus, convertendo;

while(scanf("%d", &graus)!=EOF){

convertendo=(graus+360)%360;

if(graus<=360)
{if(convertendo>=0 && convertendo <90)printf("Bom Dia!!\n");
if(convertendo>=90 && convertendo<180)printf("Boa Tarde!!\n");
if(convertendo>=180 && convertendo <270)printf("Boa Noite!!\n");
if(convertendo>=270 && convertendo<360)printf("De Madrugada!!\n");
}}
return(0);

}
