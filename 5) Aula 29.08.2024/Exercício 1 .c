/* Escrever um algoritmo  que lê um vetor A(20) e o escreve. Troque a seguir o 1º elemento com o último, 
o 2º com  o penúltimo, e assim por diante, até  o 10º com o 11º  e escreva o vetor A assim modificado. 
Utilizar somente um vetor para resolver o exercício. A alteração deve ser feita no prórpio vetor A. 
Defina um modulo para leitura , impressão e troca.*/

#include<stdio.h>
#include<locale.h>
#define MAX 20

void troca (int x[]);
void leitura (int x []);
void impressao (int x []);

int main (void)
{
	setlocale(LC_ALL, "portuguese");
		
	int a[MAX];
	
	printf("Leitura do vetor A: \n");
	leitura(a);
	
	printf("\n-----------RELATÓRIOS-----------");
	
	printf("\n\n Relatório do vetor A: ");
	impressao(a);
	
	troca(a);
	
	printf("\n\n Relaótiro do troca:");
	impressao(a);
}

void leitura (int x []) // ou int *x, não é necessário definir o tamanho do vetor / módulo para ler o vetor
{
	int i;
	
	for(i = 0; i < 20; i++){
		
		printf ("Vetor %d: ", i + 1);
		scanf("%d", &x[i]);
	}
}


void impressao (int x []) // Módulo para imprimir os vetores na tela
{
	int i;
	
	for(i = 0; i < 20; i++){
		
		printf ("\n Vetor %d: %d", i + 1, x[i]);
	}
}

void troca (int x[]){
	
	int i, aux, j = 19; 
	
	for(i = 0; i < 10; i++){
		
		aux = x[i];
		x[i] = x[j];
		x[j] = aux;
		j--;
	}
	
	
}
