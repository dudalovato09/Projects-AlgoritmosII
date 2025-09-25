/* Escreva um programa contendo uma função que retorne verdadeiro, se o número inteiro recebido como parâmetro for par e falso,
caso seja ímpar. Na função main, realize leituras consecutivas de números e para cada número lido realize
a chamada da função testando o retorno e informando para o usuário se o número lido é par ou ímpar. 
O programa deve ser encerrado quando for lido o número zero.*/

#include<stdio.h>
#include <locale.h>

 // área de prototipação
 
int par(int x);

//**********************

int par(int x) {
	return !(x % 2);
}

int main (void)
{
	setlocale(LC_ALL, "portuguese");
	
	int valor;
	
	do{
		printf ("\n Digite um valor: ");
		scanf("%d", &valor);
		
		if (par(valor)){
			
			printf(" O valor %d é par!\n", valor);
		}else{
			
			printf(" O valor %d é ímpar\n", valor);
			}
		
	}while (valor != 0);
	
	
	return 0; 
}
