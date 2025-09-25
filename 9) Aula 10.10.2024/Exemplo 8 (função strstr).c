/* Função que recebe como argumentos duas strings e procura se há esta palavra dentro da string e retorna se há ou não*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char frase[80], palavra[20];

   printf("Digite uma frase: ");
   gets(frase);
   printf("Digite uma palavra: ");
   gets(palavra);

   if( strstr(frase, palavra) )
      printf("\nA palavra foi encontrada na frase.");
   else
      printf("\nA palavra nao foi encontrada na frase.");
   getch();
}
