#include <stdio.h>

int main()
{ int caso1, caso2, caso3, a1, a2, a3;

scanf("%d %d %d", &a1, &a2, &a3);

caso1= 2*(a2+2*a3);
caso2= 2*(a1+a3);
caso3=2*(2*a1+a2);

if(caso1<=caso2 && caso1<=caso3)printf("%d\n", caso1);
if(caso2<=caso3 && caso2<caso1)printf("%d\n", caso2);
if(caso3<caso1 && caso3<caso2)printf("%d\n", caso3);





return(0);

}
