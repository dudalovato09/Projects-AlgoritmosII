/* Matrizes 

* Para ler a matriz é sempre de cima para baixo da esquerda para a direita
* Para cada linha ele deve repetir 3 vezes a coluna o for "de fora" é o da linha e o "de dentro" o da coluna e por isso devem ter dois laços for 
* No módulo media(resultado, LIN * COL) não precisaria levar o LIN e o COL já que está definido antes, porém caso não seria necessário */

#include<stdio.h>
#include<stdlib.h>
#define LIN 3
#define COL 3

void leitura (int m [LIN][COL]);
int somar (int m [LIN][COL]);
float media (float tot, int n);
int somar_linhas (int m [LIN][COL]);
int somar_colunas (int m [LIN][COL]);

int main (void)
{
	int mat [LIN][COL]; // OU mat [3][3];
	int resultado;
	
	leitura(mat); //Módulo mpara leitura de matrizes, passagem por referência mesmo sem o &
	
	resultado = somar(mat); // Módulo para somar os elementos da matriz
	
	printf("\nSoma dos valores da matriz: %d", resultado);
	printf("\nMedia dos valores da matriz: %.2f", media(resultado, LIN * COL));
	
	printf("\n--------------------------------");
	somar_linhas(mat);
	
	printf("\n--------------------------------");
	somar_colunas (mat);  
	
	return 0;
}

void leitura (int m [LIN][COL])
{
	int i, j; // o i é a linha e o j é a coluna 
	
	for(i = 0; i <= LIN - 1; i++){ //Ou i < 2, ou i < LIN 
		for(j = 0; j <= COL - 1; j++){ //Ou j < 2, ou j < COL 
			
			printf("\nDigite matriz %d / %d: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}

int somar (int m [LIN][COL])
{
	int i, j, total = 0; 
	
	for(i = 0; i <= LIN - 1; i++){  
		for(j = 0; j <= COL - 1; j++){ 
			
		total = total + m[i][j];
		
		}
	}
	
	return total; 
}

float media (float tot, int n) // O n recebe o linha * coluna
{
	return tot/n;
}

int somar_linhas (int m [LIN][COL])
{
	int i, j, total = 0; 
	
	for(i = 0; i <= LIN - 1; i++){ 
		for(j = 0; j <= COL - 1; j++){ 
			
			total = total + m[i][j];
		}

		printf("\nSoma da linha %d: %d", i, total);
		
		total = 0; //Poderia ser zerado antes do novo for
	}
}

int somar_colunas (int m [LIN][COL])
{
	int i, j, total = 0; 
	
	for(j = 0; j <= COL - 1; j++){ 
		for(i = 0; i <= LIN - 1; i++){ 
			
			total = total + m[i][j];
		}
		
		printf("\nSoma da coluna %d: %d", j, total);
		
		total = 0; //Poderia ser zerado antes do novo for
	}
}
