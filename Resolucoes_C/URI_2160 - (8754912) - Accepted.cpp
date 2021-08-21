#include <stdio.h>
#include <string.h>

int main ()
{ char form[1000];
  int cont, tamanho;

  cont=0;
  gets(form);

        tamanho=strlen(form);

        cont=cont+tamanho;


    if(cont<=80)printf("YES\n");
    else printf("NO\n");

    return(0);
}
