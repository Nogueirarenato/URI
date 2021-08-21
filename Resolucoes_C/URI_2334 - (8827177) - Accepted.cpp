#include <stdio.h>
#include<math.h>
int main()
{   unsigned long long int patinhos;
patinhos=10;
while(patinhos!=-1){

    scanf("%llu", &patinhos);

    if(patinhos!=-1){

    if(patinhos==0)printf("0\n");
    else printf("%llu\n", patinhos-1);

    }


}
return(0);
}


