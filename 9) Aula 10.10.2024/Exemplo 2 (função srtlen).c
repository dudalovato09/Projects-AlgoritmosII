/* Fala quantos dígitos tem sua string*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main() 
{ 
   char palavra[80];

   printf("Digite uma palavra: ");
   gets(palavra);

   printf("Sua palavra possui %d letras\n", strlen(palavra)); //strlen fala quantos dígitos tem sua palavra
   getch();
} 
