/* Criação de um novo arquivo texto*/

#include <stdio.h>
#include <stdlib.h>
main(void)
{
	FILE *ARQ;       // definicao do ponteiro para o arquivo
	
   ARQ=fopen("arquivo01.txt","a"); // ABERTURA DO ARQUIVO arquivo01.txt
   
   printf(" arquivo01.txt  criado no diretorio corrente - verifique");
   fclose(ARQ); // fechamento do arquivo
   
   system("pause");
}

