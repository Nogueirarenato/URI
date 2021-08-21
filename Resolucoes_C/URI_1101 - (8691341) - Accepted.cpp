#include <stdio.h>

int main ()
{int a,b,c,d,e,cont,cont1,soma;

a=2;
b=2;
while(a>0&&b>0)

        if(a>0&&b>0){scanf("%d %d", &a, &b);


if(a>0&&b>0){
    if(a<=b){c=a; d=b;}
    else{c=b; d=a;}
    soma=0;
    while(c<=d)
    {
        printf("%d ", c);
        soma=soma+c;
        c++;
    }

    printf("Sum=%d\n", soma);

}}

return(0);
}
