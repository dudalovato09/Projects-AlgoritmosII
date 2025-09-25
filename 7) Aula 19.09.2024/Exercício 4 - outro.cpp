// Leia uma matriz 4 x 4, imprima a matriz e a localização (linha e coluna) do maior valor.

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

void leituraMatriz(int matriz[LINHAS][COLUNAS], int linhas, int colunas);
void validaMaiorValor(int matriz[LINHAS][COLUNAS], int linhas, int colunas);

int main(){
	int matriz[LINHAS][COLUNAS];
	
	leituraMatriz(matriz, LINHAS, COLUNAS);
	validaMaiorValor(matriz, LINHAS, COLUNAS);
}

void leituraMatriz(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
	int i,j;
	
	for(i=0;i<linhas;i++){
		printf("Informe os valores da linhas %d\n", i+1);
		for(j=0;j<colunas;j++){
			printf("Informe o valor da coluna %d: ", j+1);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
}

void validaMaiorValor(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
	int i, j, maior, i_aux = 0, j_aux = 0;
	
	maior = matriz[0][0];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				i_aux = i+1;
				j_aux = j+1;
			}
		}
	}
	
	printf("Maior valor encontrado: %d\n\nPosicao:\nLinhas: %d\nColuna: %d", maior, i_aux , j_aux);
}
