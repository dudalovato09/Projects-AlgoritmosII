#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//Prototipação das funções
void lematriz(int v[4][4]);
bool verifica(int v[4][4]);

main( void)
{
	int matriz[4][4];
	bool confirma = false;
	lematriz(matriz);
	confirma = verifica(matriz);
	
	 if(confirma == true)
	{
		printf("\nMAtriz simetrica ");
	}else
	{
		printf("\nMAtriz Assimetrica ");	
	} 	
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

bool verifica(int v[4][4])
{
	int i,j;
	bool veri= true;
 	for(i=0;i<4;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<4;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]!=v[j][i])
		  	{
		  		return false;
		  	}
			  	 
		  }	
 	} 
 	return true;
		
}
