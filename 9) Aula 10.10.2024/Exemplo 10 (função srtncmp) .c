/* V�ria��o de outra, por�m compara apenas o que � solicitado*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char str1[50] = "Estados Unidos da America";
   char str2[50] = "Estados Unidos";

   if( strncmp(str1, str2, 14) == 0 )
      printf("\nAs strings sao iguais");
   else
      printf("\nAs strings sao diferentes");
   getch();
}
 

