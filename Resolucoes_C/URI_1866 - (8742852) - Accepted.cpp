#include <stdio.h>

int main()

{   int c1, c2, forca;
    int nome;
    c1=0;
    scanf("%d", &c2);

    while(c1<c2){

    scanf("%d", &nome);

    if(nome==1)printf("1\n");
    if(nome==2)printf("0\n");
    if(nome>2){

    if(nome%2==1)printf("1\n");
    if(nome%2==0)printf("0\n");

    }




    c1++;
    }




    return(0);
}
