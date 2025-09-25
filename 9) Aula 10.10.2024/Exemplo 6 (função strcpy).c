/* Importante!!!!!
   Função que copia o conteúdo de uma string para outra */

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char msg1[30] = "Bom dia pessoal!";
   char msg2[30] = "Boa tarde pessoal!";

   printf("\n%s", msg1);

   strcpy(msg1, msg2);

   printf("\n%s", msg1);
   getch();
 }
