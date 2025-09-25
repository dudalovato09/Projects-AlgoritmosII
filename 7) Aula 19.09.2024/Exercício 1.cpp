#include <stdio.h>
/* Yuri Strada */
#define LIN 4
#define COL 4

/* 1 Leia uma matriz 4 x 4 de número inteiros, conte e escreva quantos valores maiores que 10 ela possui. */

/* ler valores da matriz  */
void contas(int mat[LIN][COL]){
	int i=0,j=0;
	printf("Digite os valores da matrix 4x4: \n");
	for(i=0; i<LIN; i++) {
		for(j=0; j<COL; j++) {
			printf("Matriz [%d][%d]:\n ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
}
/* verificar quais valores sao acima de 10 */
int contardez(int mat[LIN][COL]){
	int i=0,j=0,contador=0;
	for ( i = 0; i < LIN; i++) {
        for ( j = 0; j < COL; j++) {
            if (mat[i][j] > 10) {
                contador++;
            }
        }
    }
    return contador;
}


int main(){
	int matriz[LIN][COL];
	int contador;
	
	contas(matriz);
	contador=contardez(matriz);
	
printf("A matriz possui %d valores maiores que dez ",contador);
	
return 0;
}
