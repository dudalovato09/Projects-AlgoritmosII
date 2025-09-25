#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//Prototipação das funções
void lematriz(int v[4][4]);
void verifica(int v[4][4]);

main( void)
{
	int matriz[4][4];
	lematriz(matriz);
	verifica(matriz);
	getch();
}

void lematriz(int v[4][4])
{
	int i,j;
 	for(i=0;i<4;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<4;j++)//laço para controlar a coluna
		  {
		  	printf("Informe linha %i, coluna %i= ",i+1,j+1);
		  	scanf("%i",&v[i][j]);
		  }	
 	}  	
}

void verifica(int v[4][4])
{
	int i,j, veri=0;
 	for(i=0;i<4;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<4;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]!=v[j][i])
		  	{
		  		veri=1;
		  	}
			  	 
		  }	
 	} 
	 if(veri=0)
	{
		printf("\nMAtriz simetrica ");
	}else
	{
		printf("\nMAtriz Assimetrica ");	
	} 		
}
