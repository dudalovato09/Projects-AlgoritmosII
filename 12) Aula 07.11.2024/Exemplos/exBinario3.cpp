/*
Este programa faz a leitura de 10 numeros e exibe os 5 ultimos numeros lidos no arquivo
*/

#include <stdio.h>// utilizada para arquivos FILE
#include <stdlib.h>
main(void)
{
 	FILE *ARQ;
 	int i,valor;
 	ARQ=fopen("matriz.bin","wb"); // wb se existe o arquivo ele cria novamente
	i=0;
	while (i<10) 	{
		printf(" Digite o %d elemento : ",i+1);
		fflush(stdin);
		scanf("%d",&valor); 
		fwrite(&valor, sizeof(int),1,ARQ);
		i++;
	}
	fclose(ARQ);
	
	ARQ=fopen("matriz.bin","rb");
	fseek(ARQ,(sizeof(int) * 5), SEEK_SET);
	
	printf("Os valores a partir da 5. posicao sao:\n");
	do
	{
		fread(&valor,sizeof(int),1,ARQ);
		printf("%d\n",valor);
	}
	while(!feof(ARQ));
	
	system("pause");
}

