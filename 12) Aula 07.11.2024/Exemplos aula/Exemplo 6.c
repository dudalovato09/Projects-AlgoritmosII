/*Exemplo: programa que faz copia de um arquivo*/

//copia o conteudo do arquivo tmp.txt em tmpCopy.txt

#include<stdio.h>
#include<stdlib.h>
#define MAX 80
main()
{
	int ch;
	char linha[MAX];
	FILE *input, *output;
	
	// uma forma de copiar (linha a linha)
	input = fopen( "tmp.txt", "r" );
	
	if(input)
	{
		output = fopen( "tmpCopy2.txt", "w" );
		fgets(linha, MAX, input);
		
			while(!feof(input) ) 
				{
					
				fputs( linha, output );
				fgets(linha, MAX, input);
				
				}
				
		fclose( input );
		fclose( output );
	}
		else printf ("deu erro na abertura do arquivo tmp.txt\n");
		
	system("pause");
}

