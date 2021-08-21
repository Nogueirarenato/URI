#include <stdio.h>
#include <string.h>


int main ()
{int estancias, cont, m1, m2, c1, memoria;
cont=0;
scanf("%d", &estancias);
m1=0;
m2=0;
memoria=0;
while(cont<estancias){

    if(m2<m1){memoria=cont; break;}
    m1=m2;
    scanf("%d", &m2);
    cont++;
    if(m2<m1){memoria=cont; break;}
}

printf ("%d\n", memoria);

return(0);
}
