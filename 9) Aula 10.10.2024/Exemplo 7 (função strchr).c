/* Função que recebe como argumentos uma string e um caracter e ele procura este caracter dentro da string e retorna se há este caracter dentro dela ou não
Não retorna quantos caracteres deste tem, apenas e há ou não*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
   char palavra[80], c;
   printf("Digite uma palavra: ");
   gets(palavra);
   printf("Digite uma letra: ");
   c = getche();
   if( strchr(palavra, c) )
      printf("\nO caracter foi encontrado na palavra.");
   else
      printf("\nO caracter nao foi encontrado na palavra.");
   getch();
}
