#include <stdio.h>

int main ()
{ long int v[2500], m[2500], k[2500], cont, i, j, e,n, max;
cont=0;
scanf("%ld", &e);
i=j=0;
i=0;
max=0;
while(i<2498){

v[i]=0;
m[i]=0;
k[i]=0;
    i++;

}

i=1;

while(i<=e){
    scanf("%ld", &n);
    k[n]=k[n]+1;
    m[n]=n;
    i++;

}

i=0;
max=0;
while(i<2498){

  if(m[i+1]>m[1]&& m[i+1]>max){v[j]=m[i+1];j++;}
    i++;

}

i=0;
while(i<j){
  printf("%ld aparece %ld vez(es)\n", v[i], k[v[i]]);
i++;
}




return(0);
}
