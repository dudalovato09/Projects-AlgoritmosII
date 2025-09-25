/* Váriação de outra, porém copia apenas o que é solicitado*/

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
