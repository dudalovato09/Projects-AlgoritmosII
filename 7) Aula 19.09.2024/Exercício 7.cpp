/*Gerar e imprimir uma matriz de tamanho 4 x 4, onde seus elementos s�o da forma:

A[i][j] = 2i + 7j - 2 se i < j; menor
A[i][j] = 3i - 1 se i = j;
A[i][j] = 4i - 5j + 1 se i > j. maior */

#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

void matriz_a(int x[LIN][COL]);
void imprimir(int x[LIN][COL]);

int main(){
	// Defini��o da matriz
	int matriz[LIN][COL];
	
	// Constr�i a matriz
	matriz_a(matriz);
	
	// Printa o resultado
	imprimir(matriz);
}


// M�dulo de c�lculo seguindo as condi��es do exerc�cio
void matriz_a(int x[LIN][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// Se linha for menor que coluna
			if(i < j){
				x[i][j] = ((2*i + 7*j) - 2);
			}
			// Se linha for maior que coluna
			else if(i > j){
				x[i][j] = ((4*i - 5*j) + 1);
			}
			// Se linha e coluna possu�rem o mesmo valor
			else{
				x[i][j] = ((3*i) - 1);
			}
		}
	}
}

// M�dulo para imprimir a matriz
void imprimir(int x[LIN][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("[%d]", x[i][j]);
		}
		printf("\n");
	}
}
