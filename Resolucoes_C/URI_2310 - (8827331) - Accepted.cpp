#include <stdio.h>
#include<math.h>
int main()
{ int cont, estancias;
double s, ts, b, tb, a, ta, ps, pb,pa, Ts, Tts, Tb, Ttb, Ta, Tta;
char nome[300];

cont=0;
s=ts=b=tb=a=ta=ps=pb=pa=Ts=Tts=Tb=Ttb=Ta=Tta=0;
scanf("%d", &estancias);

while(cont<estancias){


    scanf("%s %lf %lf %lf %lf %lf %lf", &nome, &s, &b, &a,&ts, &tb, &ta);

    Ts=Ts+s;
    Tts=Tts+ts;
    Tb=Tb+b;
    Ttb=Ttb+tb;
    Ta=Ta+a;
    Tta=Tta+ta;

    ps=100*Tts/Ts;
    pb=100*Ttb/Tb;
    pa=100*Tta/Ta;



    cont++;
}


printf("Pontos de Saque: %.2lf %%.\n", ps);
printf("Pontos de Bloqueio: %.2lf %%.\n",pb);
printf("Pontos de Ataque: %.2lf %%.\n",pa);


return(0);
}


