#include <stdio.h>

int main ()
{float a,b;
 int cont,e;
 cont=0;
 scanf("%d", &e);

while(cont<e){
    scanf("%f %f",&a,&b);

    if(b==0)printf("divisao impossivel\n");
    else printf("%.1f\n", a/b);


    cont++;
}


return(0);
}
