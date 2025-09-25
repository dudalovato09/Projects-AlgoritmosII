//Alunos: Vitor Euzebio e João Ricardo

#include<stdlib.h>
#include<stdio.h>
#define MAX 3

void lematriz(int matriz[MAX][MAX]){
	int i,j;
		
	for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (i == j) {
                matriz[i][j] = 1; // Diagonal principal
            } else {
                matriz[i][j] = 0; // Demais elementos
            }
        }
    }
}

int main(void){
	int matriz[MAX][MAX];
	int i,j;
	
	lematriz(matriz); 
	
	printf("Matriz %d %d:\n", MAX, MAX);
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	return 0;
}
