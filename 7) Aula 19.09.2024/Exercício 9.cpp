// 9. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal. 

#include<stdio.h>

void lerMatriz(int matriz[3][3]){
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			printf("Digite um numero para a matriz | %d | %d |: ", i, j);
			scanf ("%d", &matriz[i][j]);
		}
	}
}

int soma(int matriz[3][3]){
	
	int total = 0;
	
	for (int i=1; i<3; i++){
		for (int j=0; j<i; j++){
			total += matriz[i][j];
		}
	}	
	printf("\nA soma dos elementos abaixo da diagonal principal = %d", total);
}

int main() {
	int matriz[3][3];
	
	lerMatriz(matriz);
	soma(matriz);
	
	return 0;
}
