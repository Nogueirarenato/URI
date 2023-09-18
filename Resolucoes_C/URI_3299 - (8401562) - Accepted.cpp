#include <stdio.h>
#include <string.h>

int main() {

char palavra[1500];
scanf("%s", palavra);
int cont=0;
int flag=0;
int tamanho = strlen(palavra);


while(cont<=tamanho){

    if(palavra[cont]=='1' && palavra[(cont+1)]=='3')flag=1;
    cont++;

}


if(flag==0)printf("%s NO es de Mala Suerte\n", palavra);
if(flag==1)printf("%s es de Mala Suerte\n", palavra);

    return 0;
}
