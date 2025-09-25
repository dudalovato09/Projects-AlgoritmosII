/*Leia uma matriz 4 x 4, 
imprima a matriz e a localiza��o 
(linha e coluna) do maior valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIN 4
#define COL 4

void leitura(int x[LIN][COL]);
void maior(int x[LIN][COL]);

int main(){
	// Defini��o da matrix
	int matriz[LIN][COL];
	
	// Biblioteca para portugu�s
	setlocale(LC_ALL,"");
	
	// L� a matriz
	leitura(matriz);
	
	// Limpa a tela
	system("cls");
	
	// Maior valor
	maior(matriz);	
}

// M�dulo de leitura da matriz 
void leitura(int x[LIN][COL]){
	
	for(int i = 0; i < LIN; i++){
		
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da matriz na posi��o %i - %i\n", i, j);
			scanf("%i", &x[i][j]);
		}
	}
}

// M�dulo que verifica o maior termo
void maior(int x[LIN][COL]){
	
	// Define a vari�vel de compara��o e coloca o primeiro valor da matriz como valor inicial
	int num = x[0][0];
	
	// Vari�veis para receber o valor de linha e coluna do maior termo
	int linha, coluna;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// Se o n�mero for menor que os valores seguintes da matriz
			if(num < x[i][j]){
				// N�mero recebe o valor 
				num = x[i][j];
				// As vari�veis recebem os valores das posi��es do maior elemento
				linha = i;
				coluna = j;
			}
		}
	}
	
	// Printa o resultado 
	printf("Maior n�mero da matriz %d - posi��o [%d][%d]\n", num, linha, coluna);
}

