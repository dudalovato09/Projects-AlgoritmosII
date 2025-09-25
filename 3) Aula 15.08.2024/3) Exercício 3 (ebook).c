/*  Escreva um programa que contém uma função de nome “fatorial”, a qual recebe por parâmetro um número inteiro e positivo, 
também, que calcule e retorne como resultado o fatorial do número recebido como parâmetro. 
Na função main, o programa deve ler um número do usuário e mostrar como resultado o valor do 
fatorial do número lido. Obs. Se não lembrar a definição de fatorial, realize uma pequena pesquisa para verificar como se calcula.*/

#include<stdio.h>
#include<locale.h>

int fatorial (int x);

int fatorial (int x)
{
	int i, fat = 1;
	
	for(i = 1; i <= x; i++){
		
		fat *= i;
	}
	
	return fat;
}
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	int numero, result;
	
	do{

		printf("\n Digite um número inteiro e positivo: ");
		scanf("%d", &numero);
	
		if(numero <= 0){
		
			printf("\n Valor inválido, por favor redigite");
		}
	
	}while (numero <= 0);
	
	fatorial(numero);
	result = fatorial(numero);
	
	printf("\n Fatorial de %d é: %d", numero, result);
	
	return 0;
}
