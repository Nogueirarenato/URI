#include <stdio.h>

int main()

{   int c1,c2,c3;
    char bin[4],aux[4];
    c1=0;
    c2=0;
    while(scanf("%s",&bin)!=EOF){


    if(bin[0]=='c'){c2++;}
    if(bin[0]=='-' && bin[1]=='-' && bin[2]=='*')c1=c1+1;
    if(bin[0]=='-' && bin[1]=='*' && bin[2]=='-')c1=c1+2;
    if(bin[0]=='-' && bin[1]=='*' && bin[2]=='*')c1=c1+3;
    if(bin[0]=='*' && bin[1]=='-' && bin[2]=='-')c1=c1+4;
    if(bin[0]=='*' && bin[1]=='-' && bin[2]=='*')c1=c1+5;
    if(bin[0]=='*' && bin[1]=='*' && bin[2]=='-')c1=c1+6;
    if(bin[0]=='*' && bin[1]=='*' && bin[2]=='*')c1=c1+7;
    if(c2==2){printf("%d\n",c1);c2=0;c1=0;}

        }



    return(0);
}
