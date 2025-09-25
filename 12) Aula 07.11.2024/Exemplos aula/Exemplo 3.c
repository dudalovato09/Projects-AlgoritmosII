/* leitura de um arquivo texto*/

#include <stdio.h>// utilizada para arquivos FILE
#include <stdlib.h>
main(void)
{
 FILE *ARQ;
 char palavra[20];
 ARQ=fopen("arquivo01.txt","r");  // abre somente para leitura
 fgets(palavra, 20, ARQ); // faz a leitura do arquivo em disco, transferindo o conteudo para a palavra, somente uma palavra até encontrar espaço.
printf(" A palavra = %s ",palavra); // imprime no video o conteudo da palavra
fclose(ARQ);
system("pause");
}
