#include <stdio.h>

int main()
{
unsigned long long int a, b, v1[20], v2[20],carry, flag1, flag2, c1,c2;
int m,k, i1,i2;
a=1;
b=1;

while(a!=0 || b!=0)
{
    scanf("%llu %llu", &a, &b);

    if(a!=0 || b!=0){

        c2=0;
        while (c2<=19){
            v1[c2]=0;
            v2[c2]=0;
            c2++;
        }


                    v1[0]=v2[0]=flag1=flag2=0;
                    carry=0;
                    i1=1;
                    while(a>=10){
                                            v1[i1]=a%10;
                                            a=a/10;
                                            i1++;
                                }
                    v1[i1]=a;

     i2=1;
     while(b>=10){
                                            v2[i2]=b%10;
                                            b=b/10;
                                            i2++;
                                }
                    v2[i2]=b;



if(i2>=i1){k=i1;m=i2;flag2++;}
else {k=i2; m=i1;flag1++;}
                        c1=1;
                        while(c1<=19){
                                    if(v1[c1]+v2[c1]>=10){carry++;

                                                        if(flag1!=0){v1[c1+1]++;}
                                                        if(flag2!=0){v2[c1+1]++;}


                                                        }
                                   // printf("v1[%llu]=%llu    v2[%llu]=%llu carry =%llu \n",c1,v1[c1],c1,v2[c1], carry);
                                    c1++;
                                           }
                    if(carry==0)printf("No carry operation.\n");
                    else { if(carry==1)printf("1 carry operation.\n");
                            else printf("%llu carry operations.\n", carry);
                         }
                    }
}








return(0);
}

