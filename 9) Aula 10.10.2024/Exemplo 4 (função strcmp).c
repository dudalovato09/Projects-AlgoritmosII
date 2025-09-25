/* Este exemplo que le uma resposta e retorna se está correta ou não*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main() 
{ 
   char solucao[] = "branco";
   char resposta[40];

   printf("Qual e' a cor do cavalo branco de Napoleao? ");
   gets(resposta);

   while( strcmp(resposta, solucao) != 0 ) {
      printf("\nResposta incorreta. Tente novamente: ");
      gets(resposta);
   }
   printf("\nCorreto!");
   getch();
} 
