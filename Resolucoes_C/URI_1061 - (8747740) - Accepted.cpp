#include <stdio.h>
#include <math.h>

int main ()

{ char d1[5], d2[5], p1, p2,p3, p4;
  int dia1, dia2, h1, m1, s1, h2, m2, s2, diass, horass, minutoss, segundoss;




scanf("%s %d %d %c %d %c %d %s %d %d %c %d %c %d", &d1, &dia1, &h1, &p1, &m1, &p2, &s1, &d2, &dia2, &h2, &p3, &m2, &p4, &s2);




segundoss=0;
minutoss=0;
horass=0;
diass=0;

if(s2>=s1)segundoss=s2-s1;
else {segundoss=60-s1+s2;minutoss--;}


if(m2>=m1)minutoss= minutoss+m2-m1;
else {minutoss=minutoss+ 60-m1+m2;horass--;}



if(h2>h1)horass=horass+h2-h1;
else{horass=horass+24-h1+h2; diass--;}



diass= diass+ dia2-dia1;

if(segundoss==60){segundoss=0; minutoss++;}
if(minutoss==60){minutoss=0; horass++;}
if(horass==24){horass=0;diass++;}





printf("%d dia(s)\n", diass);
printf("%d hora(s)\n", horass);
printf("%d minuto(s)\n", minutoss);
printf("%d segundo(s)\n", segundoss);








return(0);
}
