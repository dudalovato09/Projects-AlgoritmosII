#include <stdio.h>// utilizada para arquivos FILE
#include <stdlib.h>
main(void)
{
 	FILE *ARQ;
	int i,a[5];
	ARQ=fopen("matriz.bin","rb"); 
	fread(a,sizeof(a),1,ARQ);	
	i=0;
	while (i<=4){
		printf(" Elemento %d da matriz: %d\n",i+1,a[i]);
		i++;
	}
	fclose(ARQ);
	system("pause");
}

