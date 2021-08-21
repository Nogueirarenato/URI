#include <stdio.h>

int main ()

{ int par[5], impar[5],todos[15], cont1, cont2, cont3,cont4;
cont1=0;
cont2=0;
cont3=0;

while(cont1<=14){
    scanf("%d", &todos[cont1]);
    cont1++;
}
cont1=0;

while(cont3<=14)
                {   if(todos[cont3]==1 || todos[cont3]==-1 ){
                            if(todos[cont3]==1){impar[cont1]=1; cont1++;}
                            if(todos[cont3]==-1){impar[cont1]=-1;cont1++;}}

                    else{

                            if(todos[cont3]%2==1||todos[cont3]%2==-1){impar[cont1]=todos[cont3]; cont1++;}
                            if(todos[cont3]%2==0){par[cont2]=todos[cont3];cont2++;}
                    }

                    if(cont1==5){cont1=0;
                                while(cont1<=4){
                                 printf("impar[%d] = %d\n", cont1, impar[cont1]);
                                 cont1++;}
                                cont1=0;
                    }

                     if(cont2==5){cont2=0;
                                while(cont2<=4){
                                 printf("par[%d] = %d\n", cont2, par[cont2]);
                                 cont2++;}
                                cont2=0;
                    }

                cont3++;







}
if(cont1==0)cont1++;
if(cont2==0)cont2++;

                                cont4=0;
                                while(cont4<cont1){
                                 printf("impar[%d] = %d\n", cont4, impar[cont4]);
                                 cont4++;}
                                cont4=0;


                                while(cont4<cont2){
                                 printf("par[%d] = %d\n", cont4, par[cont4]);
                                 cont4++;}







return(0);
}
