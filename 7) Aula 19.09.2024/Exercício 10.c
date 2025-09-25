/* 10. Leia uma matriz de 3 x 3 elementos.
 * Calcule a soma dos elementos que estão na diagonal principal. */

#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3
#define FORMATO "%9.4f "

void ler_matriz_float(float out[LIN][COL]);
void imprimir_matriz_float(float out[LIN][COL]);
float soma_diagonal_principal_float(float mat[LIN][COL]);

int main(void) {
	float mat[LIN][COL], soma;
	
	setlocale(LC_ALL, "");

	ler_matriz_float(mat);
	imprimir_matriz_float(mat);
	
	soma = soma_diagonal_principal_float(mat);
	
	printf("A soma da diagonal principal é %f.\n", soma);
}

void ler_matriz_float(float out[LIN][COL]) {
	int i, j, k, l;
	
	printf("Digite a matriz:\n");
	
	for(i=0; i<LIN; i++) {
		for(j=0; j<COL; j++) {			
			// imprimir linhas já completas:
			for (k=0; k<i; k++) {
				for (l=0; l<COL; l++) {
					printf(FORMATO, out[k][l]);
				}
				printf("\n");
			}
			
			// imprimir a linha sendo preenchida atualmente:
			for (l=0; l<j; l++) {
				printf(FORMATO, out[i][l]);
			}
			
			fflush(stdin);
			if (1 != scanf("%f", &out[i][j])) {
				printf("Erro ao ler elemento [%d, %d]!\n", i, j);
				j--;
			}
			
			printf("\n\n\n");
		}
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMatriz lida:\n");
	imprimir_matriz_float(out);
	printf("\n\n\n");
}

void imprimir_matriz_float(float matriz[LIN][COL]) {
	int i,j;
	for(i=0; i<LIN; i++) {
		for(j=0; j<COL; j++) {
			printf(FORMATO, matriz[i][j]);
		}
		printf("\n");
	}
}

float soma_diagonal_principal_float(float mat[LIN][COL]) {
	int i,j;
	float soma = 0.0;
	
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			if (i==j)
				soma += mat[i][j];
	
	return soma;
}
