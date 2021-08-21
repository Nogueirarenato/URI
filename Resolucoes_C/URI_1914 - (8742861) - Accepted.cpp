#include <stdio.h>

int main()

{   int c1, c2, n1, n2;
    char nome1[40], nome2[40], a[40],b[50];
    c1=0;
    scanf("%d", &c2);

    while(c1<c2){

    scanf("%s %s %s %s %d %d", &nome1,&a,&nome2,&b, &n1, &n2);

        if((n1+n2)%2==1){
                        if(a[0]=='I')printf("%s\n",nome1);
                        else printf("%s\n",nome2);
                      }


        if((n1+n2)%2==0){
                        if(a[0]=='P')printf("%s\n",nome1);
                        else printf("%s\n",nome2);
                      }





    c1++;
    }




    return(0);
}
