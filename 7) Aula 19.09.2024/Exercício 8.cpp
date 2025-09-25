/*Leia uma matriz de 3 x 3 elementos. 
Calcule a soma dos elementos que estão 
acima da diagonal principal. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIN 3
#define COL 3

void leitura(int x[LIN][COL]);
void soma(int x[LIN][COL]);

int main(){
	// Definição da matriz
	int matriz[LIN][COL];
	
	// Biblioteca de português
	setlocale(LC_ALL,"");
	
	// Lê a matriz
	leitura(matriz);
	
	// Soma os elementos da diagonal principal
	soma(matriz);
}

// Módulo de leitura da matriz
void leitura(int x[LIN][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da matriz na posição %i - %i\n", i, j);
			scanf("%i", &x[i][j]);
		}
	}
}

// Módulo que soma os elementos acima da diagonal principal
void soma(int x[LIN][COL]){
	int soma = 0;
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// Se a linha for menor que a coluna, irá somar o elemento da matriz
			if(i < j){
				soma += x[i][j];
			}
		}
	}
	
	// Printa o resultado
	printf("Soma dos elementos acima da diagonal principal: %d\n", soma);	
}

