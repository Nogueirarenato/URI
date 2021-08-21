#include <stdio.h>
#include <math.h>

int main()
{ int a1, a2, a3, d1,d2;

    scanf("%d %d %d", &a1, &a2, &a3);

    d1=a2-a1;
    d2=a3-a2;

    if (d2>d1||(d2==d1&&a2>a1))printf(":)\n");


    else printf(":(\n");

    return(0);
}
