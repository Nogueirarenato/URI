#include <stdio.h>
#include <string.h>


int main ()
{ int matrix[110][110], i,j,c1,c2;

while(scanf("%d %d", &i,&j)!=EOF){

    c1=0;
    c2=0;

    while(c1<101){
        while(c2<101){

    matrix[c1][c2]=0;
    c2++;
        }

    c2=0;
    c1++;
    }
    c1=0;
    c2=0;

    while(c1<i){
        while(c2<j){

    scanf("%d", &matrix[c1][c2]);
    c2++;
        }

    c2=0;
    c1++;
    }



    c1=0;
    c2=0;
    while(c1<i){
        while(c2<j){

    if(matrix[c1][c2]==1)matrix[c1][c2]=9;
    c2++;
        }

    c2=0;
    c1++;
    }

    c1=0;
    c2=0;
    while(c1<i){
        while(c2<j){

    if(matrix[c1][c2]!=9){

    if(matrix[c1][c2-1]==9)matrix[c1][c2]++;
    if(matrix[c1][c2+1]==9)matrix[c1][c2]++;
    if(matrix[c1-1][c2]==9)matrix[c1][c2]++;
    if(matrix[c1+1][c2]==9)matrix[c1][c2]++;


    }
    c2++;
        }

    c2=0;
    c1++;
    }


    c1=0;
    c2=0;
    while(c1<i){
        while(c2<j){
 printf("%d",matrix[c1][c2]);c2++;}
 printf("\n");
    c2=0;
    c1++;
    }






}





return(0);
}
