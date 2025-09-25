/*Outra forma de copiar Caracter a caracter*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 80

main()
{
	int ch;
	char linha[MAX];
	FILE *input, *output;
	
	input = fopen("tmp.txt", "r");
	
	if(input)
		{
			output = fopen( "tmpCopy.txt", "w" );
			ch = fgetc( input );
				while( ch != EOF ) 
				{
				fputc( ch, output );
				ch = fgetc( input );
				}
			fclose( input );
			fclose( output );
		}
		else printf ("deu erro na abertura do arquivo tmp.txt\n");
		
	system("pause");
}
