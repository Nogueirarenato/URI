#include<stdio.h>

int main ()
{   int flag;
    float x,y;
while(scanf("%f%f", &x,&y)!=EOF){
flag=0;

if(x==0&&y==0)
{printf("Origem\n");
flag=1;
}

if(flag==0&&x==0)
{printf("Eixo Y\n");
flag=1;
}

if(flag==0&&y==0)
{printf("Eixo X\n");
flag=1;
}

if(flag==0&&x>0&&y>0)
{printf("Q1\n");
flag=1;
}

if(flag==0&&x<0&&y>0)
{printf("Q2\n");
flag=1;
}

if(flag==0&&x<0&&y<0)
{printf("Q3\n");
flag=1;
}

if(flag==0&&x>0&&y<0)
{printf("Q4\n");
}
}
    return(0);
}
