#include <stdio.h>

int main ()
{ unsigned long long int a, b, cont1, cont2, flag;

scanf("%llu", &a);
cont1=0;
while(cont1<a)
{   scanf("%llu", &b);
	flag=0;
	cont2=2;
	
	if(b==2)printf("%llu eh primo\n", b);
	
	else{
				while(cont2<b)
				{if (b%cont2==0) flag++;
		 		cont2++;
				}
	
			if (flag==0)printf("%llu eh primo\n", b);
			else printf("%llu nao eh primo\n", b);
	
	}
	
	
	
	cont1++;
}







return(0);
}