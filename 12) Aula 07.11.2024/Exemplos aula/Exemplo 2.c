/*Grava uma palavra em um arquivo texto*/

#include <stdio.h>// utilizada para arquivos FILE
#include <stdlib.h>
main(void)
{
   FILE *ARQ;
   char palavra[20];
   ARQ=fopen("arquivo01.txt","w"); 
   printf(" Escreva uma palavra: ");
   scanf("%s",&palavra);
   fprintf(ARQ, "%s", palavra); // faz a saida para disco, para dentro do arquivo ARQ
   fclose(ARQ);
   system("pause");
}
