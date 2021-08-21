#include <iostream>
 
using namespace std;
 
int main() {
 
    int cont, anos, atual, flag, estancias;


cont=0;
scanf("%d", &estancias);


while(cont<estancias)
{
  flag=0;


scanf("%d", &anos);
atual=2015-anos;



if(flag==0){


    if(atual>0)printf("%d D.C.\n", atual);
    else printf("%d A.C.\n", abs(atual)+1);






}


    cont++;
}




    return 0;
}