/* Esta é uma variação da outra, funiciona com número definido de caracteres e pega apenas os caracteres definidos antes */

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char destino[50] = "Estados";
   char fonte[] = " Unidos da America";

   strncat(destino, fonte, 7);
   printf("%s\n", destino);
   getch();
 }
