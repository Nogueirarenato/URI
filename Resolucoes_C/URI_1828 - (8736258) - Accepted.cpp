#include <stdio.h>

int main()
{ int casos, contador;
  char sheldon[30], raj[30];
  contador=1;
  scanf("%d",&casos);

  while(contador<=casos){

    scanf("%s %s", &sheldon, &raj);

   if(sheldon[2]==raj[2])printf("Caso #%d: De novo!\n", contador);




   if(sheldon[2]== 's' && raj[2]== 'p' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'p' && raj[2]== 'd' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'd' && raj[2]== 'g' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'g' && raj[2]== 'o' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'o' && raj[2]== 's' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 's' && raj[2]== 'g' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'g' && raj[2]== 'p' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'p' && raj[2]== 'o' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'o' && raj[2]== 'd' )printf("Caso #%d: Bazinga!\n", contador);
   if(sheldon[2]== 'd' && raj[2]== 's' )printf("Caso #%d: Bazinga!\n", contador);


   if(raj[2]== 's' && sheldon[2]== 'p' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'p' && sheldon[2]== 'd' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'd' && sheldon[2]== 'g' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'g' && sheldon[2]== 'o' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'o' && sheldon[2]== 's' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 's' && sheldon[2]== 'g' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'g' && sheldon[2]== 'p' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'p' && sheldon[2]== 'o' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'o' && sheldon[2]== 'd' )printf("Caso #%d: Raj trapaceou!\n", contador);
   if(raj[2]== 'd' && sheldon[2]== 's' )printf("Caso #%d: Raj trapaceou!\n", contador);









  contador++;
  }
  return(0);
}
