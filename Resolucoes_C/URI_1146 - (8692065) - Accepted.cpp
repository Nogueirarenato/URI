#include <stdio.h>

int main ()
{ int a,b,d;
a=1;
while(a!=0){
    scanf("%d",&a);
        if(a!=0){

                    b=a;
                    d=1;
                        while(d<=b){
                                    if(d!=b)printf("%d ",d);
                                    else printf("%d\n", d);
                                    d++;
                                    }



                }
}

return (0);
}
