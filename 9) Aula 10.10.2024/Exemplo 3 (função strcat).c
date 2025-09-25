/* Recebe um parâmetro e junta o segundo com o primeira*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main() 
{ 
   char saudacao[90] = "Bom dia, ";
   char nome[80];

   printf("Digite o seu nome: ");
   gets(nome);

   strcat(saudacao, nome); // ele junta a segunda string junto com a primeira e não apaga o que tem na primeira 

   printf("\n%s", saudacao);
   getch();
} 
