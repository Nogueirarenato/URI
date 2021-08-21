#include <stdio.h>
#include <string.h>


int main ()
{ unsigned long long int  tamanho,falha, cont, multi,n, flag;
 char dati[120], erro;

 falha=1;
 dati[0]='b';

 while(falha!=0 && dati[0]!='0'){

    scanf("%llu %s", &falha, &dati);

if(falha!=0 && dati[0]!='0')
        {
            multi=1;


                if(falha==0)erro='0';
                if(falha==1)erro='1';
                if(falha==2)erro='2';
                if(falha==3)erro='3';
                if(falha==4)erro='4';
                if(falha==5)erro='5';
                if(falha==6)erro='6';
                if(falha==7)erro='7';
                if(falha==8)erro='8';
                if(falha==9)erro='9';

            n=0;
            tamanho=strlen(dati)-1;
            flag=0;
            while(n<=tamanho)
            {   if(flag==0){if((dati[n]=='1'||dati[n]=='2'||dati[n]=='3'||dati[n]=='4'||dati[n]=='5'||dati[n]=='6'||dati[n]=='7'||dati[n]=='8'||dati[n]=='9')&&erro!=dati[n])flag++;}
                if(dati[n]!=erro)
                {
                    if(flag!=0)printf("%c",dati[n]);
                }


                if(tamanho==0)break;
                n++;

            }
if(falha!=0 && dati[0]!='0'){if(flag==0)printf("0");}
if(falha!=0 && dati[0]!='0')printf("\n");
        }
 }

return(0);
}
