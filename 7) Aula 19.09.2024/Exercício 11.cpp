/*Fa�a um programa que permita ao usu�rio entrar 
com uma matriz de 3 x 3 de n�meros inteiros. 
Em seguida, gere um array unidimensional (vetor) pela soma 
dos n�meros de cada coluna da matriz e mostre na tela esse array.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIN 3
#define COL 3

void leitura(int x[LIN][COL]);
void soma_colunas(int x[LIN][COL], int result[COL]);

int main(){
	// Defini��o de matriz e vetor
	int matriz[LIN][COL], result[COL] = {0};
	
	// Biblioteca para portugu�s
	setlocale(LC_ALL,"");
	
	// L� a matriz
	leitura(matriz);
	
	// Soma as colunas
	soma_colunas(matriz, result);
	
	// Limpa a tela
	system("cls");
	
	// Printa os resultados das colunas
	for(int i = 0; i < 3; i++){
		printf("Resultado da coluna %d: %d\n", i+1, result[i]);
	}
}

// M�dulo para ler a matriz
void leitura(int x[LIN][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da matriz na posi��o %i - %i\n", i, j);
			scanf("%i", &x[i][j]);
		}
	}
}

// M�dulo para somar as colunas da matriz
void soma_colunas(int x[LIN][COL], int result[COL]){
	for(int j = 0; j < COL; j++){
		for(int i = 0; i < LIN; i++){
			// Recebe o resultado da soma das colunas
			result[j] += x[i][j];
		}
	}
}

