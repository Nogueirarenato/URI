#include <iostream>
 
using namespace std;
 
int main() {
 
    int i1, j1, i2, j2, flag;

i1=i2=j1=j2=7;

while(i1!=0 || i2!=0 || j1!=0 ||j2!=0){
    scanf("%d %d %d %d", &j1,&i1,&j2,&i2);

    if(i1!=0 || i2!=0 || j1!=0 ||j2!=0){


    flag=0;
    //printf("%d %d %d %d\n", j1,i1,j2,i2);
    if((i1==i2) && (j1==j2)){printf("0\n");flag++;}


    else{
            if(flag==0){if(i1==i2 || j1==j2){printf("1\n");flag++;}}
            if(flag==0){if(abs(i1-i2)==abs(j1-j2)){printf("1\n");flag++;}}
            if(flag==0)printf("2\n");

    }


    }

}


    return 0;
}