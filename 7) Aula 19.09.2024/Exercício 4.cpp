/*Leia uma matriz 4 x 4, 
imprima a matriz e a localização 
(linha e coluna) do maior valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIN 4
#define COL 4

void leitura(int x[LIN][COL]);
void maior(int x[LIN][COL]);

int main(){
	// Definição da matrix
	int matriz[LIN][COL];
	
	// Biblioteca para português
	setlocale(LC_ALL,"");
	
	// Lê a matriz
	leitura(matriz);
	
	// Limpa a tela
	system("cls");
	
	// Maior valor
	maior(matriz);	
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

// Módulo que verifica o maior termo
void maior(int x[LIN][COL]){
	
	// Define a variável de comparação e coloca o primeiro valor da matriz como valor inicial
	int num = x[0][0];
	
	// Variáveis para receber o valor de linha e coluna do maior termo
	int linha, coluna;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// Se o número for menor que os valores seguintes da matriz
			if(num < x[i][j]){
				// Número recebe o valor 
				num = x[i][j];
				// As variáveis recebem os valores das posições do maior elemento
				linha = i;
				coluna = j;
			}
		}
	}
	
	// Printa o resultado 
	printf("Maior número da matriz %d - posição [%d][%d]\n", num, linha, coluna);
}

