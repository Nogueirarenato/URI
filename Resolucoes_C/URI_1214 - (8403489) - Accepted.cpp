#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int a[1000], estancias, b, percentual, contador, contador2,c,d, contador3;
float media, alunos, acima;
scanf("%d", &estancias);
contador=0;

while(contador<estancias)
	{scanf("%d", &b);

	 contador2=0;
	 contador3=0;
	 c=0;
	media=0;
	 	while(contador2<b)
			{scanf("%d", &a[c]);
			media=media+(float)a[c];
			c++;
			contador2++;}
	media=media/b;
	d=0;
	acima=0;
	contador3=0;
	while(contador3<b)
			{if(a[d]>media)acima=acima+1;
			d++;
			contador3++;}
			alunos=acima/b*100;

	printf("%.3f",alunos);
	printf("%%\n");
contador++;
	}

    return 0;
}
