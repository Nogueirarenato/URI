#include <stdio.h>

int main ()
{ int novo, gremio, cont, inter, a, b, empate;
novo=1;
cont=0;
gremio=0;
inter=0;
empate=0;
while(novo==1){
    cont++;
    scanf("%d %d", &a, &b);
    if(a<b)gremio++;
    if(a==b)empate++;
    if(a>b)inter++;

printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d", &novo);

}

printf("%d grenais\n", cont);
printf("Inter:%d\n", inter);
printf("Gremio:%d\n", gremio);
printf("Empates:%d\n",empate);
if(gremio<inter)printf("Inter venceu mais\n");
if(gremio>inter)printf("Gremio venceu mais\n");

return (0);
}
