#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m[600][600], i, j, alunos, jantares, c1, c2, soma[600], flag;

    alunos=1;
    jantares=1;

    while(jantares!=0 || alunos !=0){

    scanf("%d %d", &alunos, &jantares);

    if(jantares!=0 || alunos !=0){

    c1=0;
    c2=0;
    flag=0;
    while(c1<alunos)
    {
        soma[c1]=0;
        c1++;
    }
    c1=0;
    while(c2<jantares){
    while(c1<alunos){

    scanf("%d", &m[c1][c2]);
    soma[c1]=soma[c1]+m[c1][c2];
    //printf("m[c1][c2]=%d c1=%d c2=%d soma=%d\n", m[c1][c2], c1, c2, soma[c1]);
    c1++;
    }
    c2++;
    c1=0;
    }

    c1=0;
    while(c1<alunos){

    if(soma[c1]==jantares){flag++; break;}
    c1++;
    }


    if(flag==0)printf("no\n");
    else printf ("yes\n");





    }





    }



return(0);

}

