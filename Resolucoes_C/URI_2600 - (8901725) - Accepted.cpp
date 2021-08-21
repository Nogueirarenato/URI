#include <stdio.h>


int main()
{ int a,b,c,d,e,f, cont, estancias, flag;;
cont=0;
scanf("%d", &estancias);

while(cont<estancias){
    flag=0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a==1 || b==1 || c==1 || d==1 || e==1 || f==1)flag++;
    if(a==2 || b==2 || c==2 || d==2 || e==2 || f==2)flag++;
    if(a==3 || b==3 || c==3 || d==3 || e==3 || f==3)flag++;
    if(a==4 || b==4 || c==4 || d==4 || e==4 || f==4)flag++;
    if(a==5 || b==5 || c==5 || d==5 || e==5 || f==5)flag++;
    if(a==6 || b==6 || c==6 || d==6 || e==6 || f==6)flag++;

    if(flag==6 && a+f==7 && b+d==7 && c+e==7 )printf("SIM\n");
    else printf("NAO\n");

    cont++;
}









return(0);

}

