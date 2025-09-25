/* Desenvolva um programa que armazene 10 valores lidos em um vetor e gere um segundo vetor de tamanho 10 com os valores compactados, 
onde não irá repassar o valor armazenado do primeiro vetor para o segundo vetor se for zero ou negativo. 
Assim, o segundo vetor terá somente os valores positivos. Imprima o vetor gerado.*/

#include<stdio.h>

int main (void)
{
	int valor[10];
	int valor_compactado[10];
	int i, j = 0;
	
	// O I controla o primeiro veotor e o J controla o segundo vetor de núeros positivos
	
	for(i = 0; i < 10; i++){
		
		printf("Digite o valor [%d]:", i + 1);
		scanf("%d", &valor[i]);
	}
	
	for(i = 0; i < 10; i++){
		
		if (valor[i] > 0){
			
			valor_compactado[j] = valor[i];
			j++;
		}
	}
	
	// O laço for esta com i < j controla o espaço dos vetores para que não tenha lixo nos espaços que possam sobrar
	
	for(i = 0; i < j; i++){
		
		printf("%d", valor_compactado[i]);
	}
}
