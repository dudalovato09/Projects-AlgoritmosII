#include <stdio.h>// utilizada para arquivos FILE
#include <stdlib.h>
main(void)
{
 	FILE *ARQ;
 	int i,a[5];
 	ARQ=fopen("matriz.bin","wb"); // wb se existe o arquivo ele cria novamente
	i=0;
	while (i<=4) 	{
		printf(" Digite o %d elemento : ",i+1);
		fflush(stdin);
		scanf("%d",&a[i]); 
		i++;
	}
	fwrite(a,sizeof(a),1,ARQ); // grava no arquivo de uma so vez a matriz
	fclose(ARQ);
	system("pause");
}

