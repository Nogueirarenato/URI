#include<stdio.h>
#include<math.h>
int main()
{ float x1,x2,y1,y2,d;
    scanf("%f%f%f%f",&x1, &y1,&x2,&y2);
    d=sqrtf((x1*x1-2*x1*x2+x2*x2)+(y1*y1-2*y1*y2+y2*y2));
    printf("%.4f\n",d);


return(0);
}
