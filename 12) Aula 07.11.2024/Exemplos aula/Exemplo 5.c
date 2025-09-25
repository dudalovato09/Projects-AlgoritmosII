/* Le frase caractere por caractere*/

#include <stdio.h>
#include <stdlib.h>
main(void)
{
	FILE *ARQ;
	char letra;
	   
	ARQ=fopen("frase01.txt","r");  // abre o arquivo frase01.txt para leitura
	printf("Frase do arquivo =  ");
	   
	while ((letra=fgetc(ARQ)) !=EOF) // Enquanto nao encontra o final do arquivo EOF  
	printf("%c", letra); 
	fclose(ARQ);   
	  
	system("pause");
}

// fgetc - efetua a leitura de apenas um caractere armazenado
