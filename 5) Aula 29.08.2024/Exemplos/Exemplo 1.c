/*  Modularização com vertores
* Vetor a passagem é sempre por referência e não precisa definir ponteiro*/

#include<stdio.h>
#include<locale.h>
#define MAX 5

float med (int x []);
void leitura (int x []);
void impressao (int x []);
void calculo (int x [], int y [], int z []);

int main (void)
{
	setlocale(LC_ALL, "portuguese");
	
	int a[MAX], b[MAX], c[MAX];
	float m = 0;
	
	printf("Leitura do vetor A: \n");
	leitura(a); //Como é um vetor a passagem é por referência
	
	printf("\nLeitura do vetor B: \n"); //Pode ser usado o mesmo módulo para a leitura de mais de um vetor	
	leitura(b);
	
	calculo(a,b,c);
	
	printf("\n\n Relatório do vetor A: ");
	impressao(a);
	
	printf("\n\n Relatório do vetor B: ");
	impressao(b);
	
	printf("\n\n Relatório do vetor C: ");
	impressao(c);
	
	m = med(c);
	printf("\n\n Média do vetor = %.2f", m);
	
	return 0;
}

void leitura (int x []) // ou int *x, não é necessário definir o tamanho do vetor / módulo para ler o vetor
{
	int i;
	
	for(i = 0; i < 5; i++){
		
		printf ("Vetor %d: ", i + 1);
		scanf("%d", &x[i]);
	}
}

void calculo (int x [], int y [], int z []) // Módulo para calcular a soma dos vetores
{
	int i;
	
	for(i = 0; i < 5; i++){
		
		z[i] = x[i] + y[i];
	}
}

void impressao (int x []) // Módulo para imprimir os vetores na tela
{
	int i;
	
	for(i = 0; i < 5; i++){
		
		printf ("\n Vetor %d: %d", i + 1, x[i]);
	}
}

float med (int x []) // Módulo para calcular a soma dos vetores
{
	int i, total = 0;
	
	for(i = 0; i < 5; i++){
		
		total = total + x[i];
	}
	
	return total/MAX;
}
