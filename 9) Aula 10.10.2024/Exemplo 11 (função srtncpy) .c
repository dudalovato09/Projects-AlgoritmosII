/* V�ria��o de outra, por�m copia apenas o que � solicitado*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char str1[] = "Estados Unidos da America";
   char str2[50];

   strncpy(str2, str1, 14);
   printf("\n%s", str2);
   getch();
 }
