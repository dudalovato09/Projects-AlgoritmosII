#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<string>

#define LIN 2
#define COL 2


int main(){
	setlocale(LC_ALL, "");

	int matriz1[LIN][COL], matriz2[LIN][COL], matrizResultado[LIN][COL];

	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++) {
			printf("Matriz 1 [%d][%d]: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++) {
			printf("Matriz 2 [%d][%d]: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++) {
			if(matriz1[i][j] >= matriz2[i][j]) {
				matrizResultado[i][j] = matriz1[i][j];
			} else {
				matrizResultado[i][j] = matriz2[i][j];
			}
		}
	}
	
		
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++) {
			printf("%d ",  matrizResultado[i][j]);
		}
		printf("\n");
	}
	
	
	
}
