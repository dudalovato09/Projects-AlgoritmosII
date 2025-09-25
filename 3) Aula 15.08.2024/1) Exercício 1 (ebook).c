/* Escreva um programa contendo uma fun��o que retorne verdadeiro, se o n�mero inteiro recebido como par�metro for par e falso,
caso seja �mpar. Na fun��o main, realize leituras consecutivas de n�meros e para cada n�mero lido realize
a chamada da fun��o testando o retorno e informando para o usu�rio se o n�mero lido � par ou �mpar. 
O programa deve ser encerrado quando for lido o n�mero zero.*/

#include<stdio.h>
#include <locale.h>

 // �rea de prototipa��o
 
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
			
			printf(" O valor %d � par!\n", valor);
		}else{
			
			printf(" O valor %d � �mpar\n", valor);
			}
		
	}while (valor != 0);
	
	
	return 0; 
}
