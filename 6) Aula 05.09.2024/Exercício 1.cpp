#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//Prototipação das funções
void lematriz(int v[3][3]);
void imprime(int v[3][3]);
int maior(int v[3][3]);
void novamatriz(int v[3][3], int maior);

main( void)
{
	int matriz[3][3], resmaior;
	printf("\n\nleitura da Matriz:\n\n");
	lematriz(matriz);
    printf("\n\n Impressao da Matriz lida\n\n");  
	imprime (matriz);
	resmaior=maior(matriz);
	printf("\n\n O maior elemento encontrado na matriz = %i", resmaior);
	novamatriz(matriz,resmaior);	
	printf("\n\nNova Matriz Alterada(com a soma do maior elemento encontrado)");  
	imprime(matriz);
	getch();
}
//Modulo para leitura da matriz
void lematriz(int v[3][3])
{
   int i,j;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	printf("Matriz - Informe linha %i, coluna %i= ",i+1,j+1);
		  	scanf("%i",&v[i][j]);
		  }	
 	}  
	
}

// Modulo para impressao da matriz
void imprime(int v[3][3])
{
	int i,j;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	printf("\n Matriz - (Linha %i, coluna %i) = %i ",i+1,j+1,v[i][j]);
		  	
		  }	
 	}  
}

//Modulo para enocntrar o maior elemento da matriz e retorna para o main
 int maior(int v[3][3])
 {
 	int numaior=v[0][0];
 	int i,j;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	  if(v[i][j]>numaior)
			  {
			  	 numaior=v[i][j];
			  }		  
		  }	
 	}  
 	return  numaior;
 }
 
 // Modulo para calculo da soma do maior elemento pelos elementos da matriz
 void novamatriz(int v[3][3], int maior)
 {
 	int i,j;
 	
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	 	v[i][j]= v[i][j]+maior;  	  
		  }	
 	}  	
 }

