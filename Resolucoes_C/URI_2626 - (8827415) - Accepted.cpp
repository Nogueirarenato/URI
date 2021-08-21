#include <stdio.h>
#include<math.h>
#include <string.h>
int main()
{   int flag;
    char a[30], b[30], c[30];

    while(scanf("%s %s %s", &a, &b, &c)!=EOF)

    {
        flag=0;
        if((a[2]=='d' && b[2]=='s' && c[2]=='s')||(a[2]=='s' && b[2]=='p' && c[2]=='p')||(a[2]=='p' && b[2]=='d' && c[2]=='d')) {flag++; printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");}
        if((a[2]=='d' && b[2]=='p' && c[2]=='d')||(a[2]=='s' && b[2]=='d' && c[2]=='s')||(a[2]=='p' && b[2]=='s' && c[2]=='p')) {flag++; printf("Iron Maiden's gonna get you, no matter how far!\n");}
        if((a[2]=='d' && b[2]=='d' && c[2]=='p')||(a[2]=='s' && b[2]=='s' && c[2]=='d')||(a[2]=='p' && b[2]=='p' && c[2]=='s')) {flag++; printf("Urano perdeu algo muito precioso...\n");}
        if(flag==0)printf("Putz vei, o Leo ta demorando muito pra jogar...\n");


    }







return(0);
}


