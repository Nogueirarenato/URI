#include <stdio.h>

int main ()
{int a, b, soma, cont;

scanf("%d", &a);
b=-1;

while(b<=0){
    scanf("%d", &b);
}

cont=0;
soma=0;
while(cont<= (b-1)){
    soma=soma+a+cont;
    cont++;

}

printf("%d\n",soma);

return(0);
}

