//5. Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz 
//e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “valor não encontrado”. 

#include <stdio.h>

#define SIZE 5

void preencherMatriz(int matriz[SIZE][SIZE]) {
    printf("Digite os valores para a matriz 5x5:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int buscarValor(int matriz[SIZE][SIZE], int x, int *linha, int *coluna) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == x) {
                *linha = i;
                *coluna = j;
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int matriz[SIZE][SIZE];
    int x, linha, coluna;

    preencherMatriz(matriz);

    printf("Digite o valor que deseja buscar na matriz: ");
    scanf("%d", &x);

    if (buscarValor(matriz, x, &linha, &coluna)) {
        printf("Valor %d encontrado na posicao [%d][%d]\n", x, linha, coluna);
    } else {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}

