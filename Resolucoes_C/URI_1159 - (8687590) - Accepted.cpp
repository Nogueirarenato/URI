#include <stdio.h>

int main ()
{ unsigned long long int a;

while(a!=0)
{ scanf("%llu", &a);

				if(a!=0){	
				if(a%2==0)printf("%llu\n", a+a+2+a+4+a+6+a+8);		
				else printf("%llu\n", a+1+a+3+a+5+a+7+a+9);	}
}
	
return(0);	
}