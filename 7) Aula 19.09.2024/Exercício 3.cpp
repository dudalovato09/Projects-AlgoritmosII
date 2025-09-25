/*Fa�a um programa que preenche uma matriz 4 x 4 com o 
produto do valor da linha e da coluna de cada elemento. 
Em seguida, imprima na tela a matriz. */

#include <stdio.h>
#define LIN 4
#define COL 4

int main(){
	// Defini��o de matriz
	int matriz[LIN][COL];
	
	// C�lculo da matriz
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// Multiplica��o de linha X coluna
			matriz[LIN][COL] = i*j;
			// Printa o resultado na tela
			printf("[%i]", matriz[LIN][COL]);
		}
		printf("\n");
	}
}
