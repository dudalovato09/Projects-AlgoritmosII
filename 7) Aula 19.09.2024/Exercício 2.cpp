//Lucas Gomes de Castilhos 
//Declare uma matriz 3 x 3. Preencha com 1 a diagonal principal e com 0 os demais elementos da matriz. Escreva ao final a matriz obtida.

#include <stdio.h>

int main() {
    // Declaração de uma matriz 3x3
    int matriz[3][3];
   
    // Utilizei dois loops for, onde a variável i percorre as linhas e a j as colunas
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // Utilizei a condição if para verificar se estamos na digonal principal, se a condição for verdadeira, o elemento da matriz recebe o valor 1. Caso contrário, recebe o valor 0.
            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
   
    // A matriz pe exibida em formato de tabela, com cada linha sendo exibida em uma linha diferente na tela
    printf("Matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

