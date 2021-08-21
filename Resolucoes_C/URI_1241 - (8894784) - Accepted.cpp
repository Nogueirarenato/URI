#include <stdio.h>
#include <string.h>


int main()
{
    int t1,t2, t3, t4, cont, estancias, c1, c2,c3, flag, flag2;
    char p1[1500], p2[1500],p3[1500],p4[1500];

cont=0;
scanf("%d", &estancias);

while(cont<estancias){

    scanf("%s %s", &p1, &p2);
    t3=strlen(p1);
    t4=strlen(p2);

    c1=t3-1;
    c2=t4-1;
    c3=0;
    flag=0;

while(c2>=0)
{
    if(p1[c1]!=p2[c2])flag++;
    c2--;
    c1--;

}





if(flag==0)printf("encaixa\n");
else printf("nao encaixa\n");







    cont++;
}







return(0);
}
