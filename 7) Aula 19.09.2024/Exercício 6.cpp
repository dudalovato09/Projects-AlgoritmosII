// 6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas. 

#include <stdio.h>

#define TAM 4

// Função para ler uma matriz
void lerMatriz(int matriz[TAM][TAM], int numero) {
    printf("Digite os elementos da matriz %d:\n", numero);
    int i,j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
}

// Função para imprimir a matriz
void printMatriz(int matriz[TAM][TAM]) {
    printf("\nMatriz:\n");
    int i,j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para criar a matriz com os maiores valores
void criarMatrizMax(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int matrizMax[TAM][TAM]) {
	int i,j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMax[i][j] = matriz1[i][j];
            } else
                matrizMax[i][j] = matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[TAM][TAM];
    int matriz2[TAM][TAM];
    int matrizMax[TAM][TAM];

    lerMatriz(matriz1, 1);
    lerMatriz(matriz2, 2);

    criarMatrizMax(matriz1, matriz2, matrizMax);

    printf("Matriz 1:");
    printMatriz(matriz1);
    printf("Matriz 2:");
    printMatriz(matriz2);
    printf("Matriz com os maiores valores:");
    printMatriz(matrizMax);

    return 0;
}

