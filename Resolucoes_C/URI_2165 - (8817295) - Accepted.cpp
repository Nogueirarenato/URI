#include <stdio.h>
#include <string.h>


int main ()
{
int num;
char texto[5000];


gets(texto);
num=strlen(texto);

if(num<=140)printf ("TWEET\n");
else printf("MUTE\n");



return(0);
}
