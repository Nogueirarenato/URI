#include <stdio.h>

int main ()
{int total, pago,troco;

total=1;
pago=1;

while(total!=0||pago!=0){



    scanf("%d %d", &total, &pago);


    if(total!=0 || pago!=0){

    troco=pago-total;


    if(troco==4||troco==7||troco==12||troco==22||troco==52||troco==102||troco==102||troco==10||troco==15||troco==25||troco==55||troco==105||troco==20||troco==30||troco==60||troco==110||troco==40||troco==70||troco==120||troco==100||troco==150||troco==200)printf("possible\n");
    else printf("impossible\n");



    }












}












    return(0);
}
