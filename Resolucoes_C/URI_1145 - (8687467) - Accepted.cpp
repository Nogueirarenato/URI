#include <stdio.h>

int main ()
{ unsigned long long int a, b, c1, c2;

scanf("%llu %llu", &a, &b);
c1=1;
c2=1;
while (c2<=b)
	{
		while(c1<=a)
			{if(c1==a)printf("%llu",c2);
			 else printf("%llu ",c2);
				c2++;
				c1++;
			}	 
	
	
	printf("\n");	
	c1=1;	
	}
	
	
	
	
	
	
	
return(0);	
}