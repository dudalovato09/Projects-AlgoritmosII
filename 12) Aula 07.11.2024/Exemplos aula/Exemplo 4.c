/* Cria e grava frase caractere a caractere */

#include <stdio.h>
#include <stdlib.h>

main(void)
{
	FILE *ARQ;
	char letra;
	ARQ=fopen("frase01.txt","w");  // cria o arquivo frase01.txt
	   
	printf("Escreva a frase desejada :\n\n ");
	while ((letra=getchar()) !='\n')  fputc(letra,ARQ); // enquanto a tecla for diferente de enter grava 
	//caracter por caracter
	fclose(ARQ);
	system("pause");
}
