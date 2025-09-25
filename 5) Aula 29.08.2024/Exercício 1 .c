/* Escrever um algoritmo  que l� um vetor A(20) e o escreve. Troque a seguir o 1� elemento com o �ltimo, 
o 2� com  o pen�ltimo, e assim por diante, at�  o 10� com o 11�  e escreva o vetor A assim modificado. 
Utilizar somente um vetor para resolver o exerc�cio. A altera��o deve ser feita no pr�rpio vetor A. 
Defina um modulo para leitura , impress�o e troca.*/

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
	
	printf("\n-----------RELAT�RIOS-----------");
	
	printf("\n\n Relat�rio do vetor A: ");
	impressao(a);
	
	troca(a);
	
	printf("\n\n Rela�tiro do troca:");
	impressao(a);
}

void leitura (int x []) // ou int *x, n�o � necess�rio definir o tamanho do vetor / m�dulo para ler o vetor
{
	int i;
	
	for(i = 0; i < 20; i++){
		
		printf ("Vetor %d: ", i + 1);
		scanf("%d", &x[i]);
	}
}


void impressao (int x []) // M�dulo para imprimir os vetores na tela
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
