#include <stdio.h>

int main ()
{int mes, dia, flag, total;




   while(scanf("%d %d", &mes, &dia)!=EOF){
    flag=0;

        if(mes==12&&dia==24){printf("E vespera de natal!\n"); flag++;}
        if(mes==12&&dia==25){printf("E natal!\n"); flag++;}
        if(mes==12&&dia>=26){printf("Ja passou!\n"); flag++;}











    if(flag==0){

            if(mes==1){
                total=360-dia;
            }

            if(mes==2){
                       total=360-31-dia;
            }
            if(mes==3){
                       total=360-31-29-dia;
            }
            if(mes==4){
                       total=360-31-29-31-dia;
            }
            if(mes==5){
                       total=360-31-29-31-30-dia;
            }
            if(mes==6){
                      total=360-31-29-31-30-31-dia;
            }
            if(mes==7){
                      total=360-31-29-31-30-31-30-dia;
            }
            if(mes==8){
                        total=360-31-29-31-30-31-30-31-dia;
            }
            if(mes==9){
                       total=360-31-29-31-30-31-30-31-31-dia;
            }
            if(mes==10){
                       total=360-31-29-31-30-31-30-31-31-30-dia;
            }
            if(mes==11){
                        total=360-31-29-31-30-31-30-31-31-30-31-dia;
            }
            if(mes==12){
                        total=360-31-29-31-30-31-30-31-31-30-31-30-dia;


            }

            printf("Faltam %d dias para o natal!\n",total);

    }






   }
    return(0);
}
