#include <stdio.h>
int main()
{
int a, b, cont, estancias;
cont=0;
scanf("%d", &estancias);

while(cont<estancias){


    scanf("%dx%d",&a,&b);

    if(a==b){
                    printf ("%d x 5 = %d\n", a, a*5);
                    printf ("%d x 6 = %d\n", a, a*6);
                    printf ("%d x 7 = %d\n", a, a*7);
                    printf ("%d x 8 = %d\n", a, a*8);
                    printf ("%d x 9 = %d\n", a, a*9);
                    printf ("%d x 10 = %d\n", a, a*10);
    }

    else{
            printf ("%d x 5 = %d && %d x 5 = %d\n",a,a*5,b,b*5);
            printf ("%d x 6 = %d && %d x 6 = %d\n",a,a*6,b,b*6);
            printf ("%d x 7 = %d && %d x 7 = %d\n",a,a*7,b,b*7);
            printf ("%d x 8 = %d && %d x 8 = %d\n",a,a*8,b,b*8);
            printf ("%d x 9 = %d && %d x 9 = %d\n",a,a*9,b,b*9);
            printf ("%d x 10 = %d && %d x 10 = %d\n",a,a*10,b,b*10);





    }




    cont++;
}



return(0);
}


