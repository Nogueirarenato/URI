#include <stdio.h>
#include <string.h>


int main()
{ int tamanho, cont, estancias;
char s[100];

cont=0;
scanf("%d", &estancias);

while(cont<estancias){

    scanf("%s", &s);
    tamanho=strlen(s);


    if(tamanho!=3){if(cont==estancias-1)printf("%s\n",s);
                   else printf("%s ",s);}

    else{

          if(s[0]=='O'&&s[1]=='B'||s[0]=='U'&&s[1]=='R')
                        {
                            if(s[0]=='O'&&s[1]=='B')
                                                {if(cont==estancias-1)printf("OBI\n",s);
                                                else printf("OBI ",s);}

                            else {if(cont==estancias-1)printf("URI\n",s);
                                                else printf("URI ",s);}}





          else {if(cont==estancias-1)printf("%s\n",s);
                   else printf("%s ",s);}

    }






    cont++;
}













return(0);
}
