
#include <stdio.h>

int main()

{   unsigned long long int a,resto[10000],c1;

    scanf("%llu", &a);
    c1=0;
    if(a<16){if(a==0)printf("0\n");
    if(a==1)printf("1");
    if(a==2)printf("2");
    if(a==3)printf("3");
    if(a==4)printf("4");
    if(a==5)printf("5");
    if(a==6)printf("6");
    if(a==7)printf("7");
    if(a==8)printf("8");
    if(a==9)printf("9");
    if(a==10)printf("A");
    if(a==11)printf("B");
    if(a==12)printf("C");
    if(a==13)printf("D");
    if(a==14)printf("E");
    if(a==15)printf("F");}


    else {while(a>=16)
    {
        resto[c1]=a%16;
        a=a/16;
        c1++;
    }
        resto[c1]=a;


        while(c1>0){

        if(resto[c1]>=10){if(resto[c1]==10)printf("A");
                          if(resto[c1]==11)printf("B");
                          if(resto[c1]==12)printf("C");
                          if(resto[c1]==13)printf("D");
                          if(resto[c1]==14)printf("E");
                          if(resto[c1]==15)printf("F");
                         }

        else printf("%llu", resto[c1]);

        c1--;

        }
                          if(resto[c1]==0)printf("0");
                          if(resto[c1]==1)printf("1");
                          if(resto[c1]==2)printf("2");
                          if(resto[c1]==3)printf("3");
                          if(resto[c1]==4)printf("4");
                          if(resto[c1]==5)printf("5");
                          if(resto[c1]==6)printf("6");
                          if(resto[c1]==7)printf("7");
                          if(resto[c1]==8)printf("8");
                          if(resto[c1]==9)printf("9");
                          if(resto[c1]==10)printf("A");
                          if(resto[c1]==11)printf("B");
                          if(resto[c1]==12)printf("C");
                          if(resto[c1]==13)printf("D");
                          if(resto[c1]==14)printf("E");
                          if(resto[c1]==15)printf("F");}


        printf("\n");





    return(0);
}
