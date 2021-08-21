#include<stdio.h>



int main(){ int cont, estancias, m1[30][30], i, j, flag, soma, m, n, flag2;

cont=1;
scanf("%d", &estancias);
while(cont<=estancias){

    flag=0;

    i=0;
    j=0;
    while(i<9){
            while(j<9){
            scanf("%d", &m1[i][j]);
            j++;
            }
    i++;
    j=0;
    }

    i=0;
    j=0;
    soma=0;
    flag2=0;
    while(i<9){
            while(j<9){
            soma=soma+m1[i][j];

            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            //printf("flag2= %d\n", flag2);


            j++;
            }

    if(soma!=45){flag++;}
    i++;
    j=0;

    soma=0;
    }
    //printf("flag2= %d\n", flag2);
if(flag2!=9*1462)flag++;
flag2=0;

    i=0;
    j=0;
    soma=0;
    while(i<9){
            while(j<9){
            soma=soma+m1[j][i];
            if(m1[j][i]==1)flag2=flag2+11;
            if(m1[j][i]==2)flag2=flag2+15;
            if(m1[j][i]==3)flag2=flag2+6;
            if(m1[j][i]==4)flag2=flag2+207;
            if(m1[j][i]==5)flag2=flag2+24;
            if(m1[j][i]==6)flag2=flag2+99;
            if(m1[j][i]==7)flag2=flag2+779;
            if(m1[j][i]==8)flag2=flag2+80;
            if(m1[j][i]==9)flag2=flag2+241;
            j++;
            }

    if(soma!=45)flag++;
    i++;
    j=0;

    soma=0;
    }
if(flag2!=9*1462)flag++;
flag2=0;


//1

    i=0;
    j=0;
    m=3;
    n=3;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
           // printf("%d ", m1[i][j]);
           //printf("soma= %d flag= %d\n", soma, flag);
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    //printf("soma= %d flag= %d\n", soma, flag);
    i++;
    j=0;
 //printf("\n");
 //printf("\n");

    }
if(soma!=45)flag++;
soma=0;
if(flag2!=1462)flag++;
flag2=0;
//2
    i=0;
    j=3;
    m=3;
    n=6;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
          //printf("%d ", m1[i][j]);
              if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=3;
//printf("\n");
//printf("\n");

    }
if(soma!=45)flag++;
soma=0;
if(flag2!=1462)flag++;
flag2=0;


//3
    i=0;
    j=6;
    m=3;
    n=9;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=6;


    }
if(soma!=45)flag++;
soma=0;
if(flag2!=1462)flag++;
flag2=0;


//4

    i=3;
    j=0;
    m=6;
    n=3;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=0;

    }
    if(soma!=45)flag++;
    soma=0;
if(flag2!=1462)flag++;
flag2=0;



//5
    i=3;
    j=3;
    m=6;
    n=6;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=3;


    }

    if(soma!=45)flag++;
    soma=0;

if(flag2!=1462)flag++;
flag2=0;



//6
    i=3;
    j=6;
    m=6;
    n=9;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;

            j++;
            }


    i++;
    j=6;


    }
if(soma!=45)flag++;
soma=0;
if(flag2!=1462)flag++;
flag2=0;

//7

    i=6;
    j=0;
    m=9;
    n=3;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;

            j++;
            }


    i++;
    j=0;


    }
    if(soma!=45)flag++;
     soma=0;
     if(flag2!=1462)flag++;
flag2=0;

//8
    i=6;
    j=3;
    m=9;
    n=6;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=3;


    }
    if(soma!=45)flag++;
    soma=0;
  if(flag2!=1462)flag++;
flag2=0;

//9
    i=6;
    j=6;
    m=9;
    n=9;
    soma=0;
    while(i<m){
            while(j<n){
            soma=soma+m1[i][j];
            if(m1[i][j]==1)flag2=flag2+11;
            if(m1[i][j]==2)flag2=flag2+15;
            if(m1[i][j]==3)flag2=flag2+6;
            if(m1[i][j]==4)flag2=flag2+207;
            if(m1[i][j]==5)flag2=flag2+24;
            if(m1[i][j]==6)flag2=flag2+99;
            if(m1[i][j]==7)flag2=flag2+779;
            if(m1[i][j]==8)flag2=flag2+80;
            if(m1[i][j]==9)flag2=flag2+241;
            j++;
            }


    i++;
    j=6;


    }
    if(soma!=45)flag++;
    soma=0;
    if(flag2!=1462)flag++;
    flag2=0;


    if(flag==0)printf("Instancia %d\nSIM\n", cont);
    else printf("Instancia %d\nNAO\n", cont);


    printf("\n");
    cont++;
}



return 0;

}
