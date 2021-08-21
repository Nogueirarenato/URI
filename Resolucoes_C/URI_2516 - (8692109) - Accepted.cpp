#include <stdio.h>

int main ()
{ float s,a,b,t;
while(scanf("%f %f %f", &s, &a, &b)!=EOF)
{if(a<=b)printf("impossivel\n");

else{t=s/(a-b);
    printf("%.2f\n",t);
}

}

return (0);
}
