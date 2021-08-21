#include <stdio.h>

int main()

{   int c1, c2, forca;
    char nome[100];
    c1=0;
    scanf("%d", &c2);

    while(c1<c2){

    scanf("%s %d", &nome, &forca);

    if(nome[0]=='T' && nome[1]=='h'&&nome[2]=='o'&& nome[3]=='r'&&nome[4]=='\0')printf("Y\n");
    else printf("N\n");










    c1++;
    }




    return(0);
}
