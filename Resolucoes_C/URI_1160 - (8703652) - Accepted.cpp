#include <stdio.h>

int main ()
{
int estancias, cont2;
int c1, c2;
double  t1, t2;


scanf("%d", &estancias);


while(estancias>0)
{

    cont2=0;
    scanf("%d %d %lf %lf", &c1, &c2, &t1, &t2 );



                            t1=t1/100+1;
                            t2=t2/100+1;

                            while(c1<=c2){
                                if(cont2==101)break;
                                c1=c1*t1;
                                c2=c2*t2;
                                cont2++;
                            }

                if(cont2>100)printf("Mais de 1 seculo.\n");
                else printf("%d anos.\n", cont2);




c1=1;
c2=2;
estancias--;
}



return(0);
}

