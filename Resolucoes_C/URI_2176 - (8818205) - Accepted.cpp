#include <stdio.h>
#include <string.h>


int main ()
{ char bit[300];
  int n, c,c1;

c=0;
c1=0;
scanf("%s", &bit);
n=strlen(bit);

while(c<n){
    if (bit[c]=='1')c1++;
    c++;
}

if(c1==1)printf("%s1\n",bit);
else{
    if(c1%2==1)printf("%s1\n",bit);
    else printf("%s0\n",bit);

}








return(0);
}
