/* 1. Fa�a uma sub-rotina/modulo que receba um n�mero inteiro positivo N como Par�metro 
e retorne a soma dos N�meros inteiros entre o n�mero 1 e o N (inclusive). 
Primeira forma: desenvolva um m�dulo/procedimento que calcula a soma dos valores e imprime a soma no pr�prio m�dulo.

Segunda forma:desenvolva um m�dulo/fun��o que retorne o valor da soma para o main, utilizando return.

Terceira forma: desenvolva um m�dulo que utilize passagem por refer�ncia, onde o valor da soma deve ser passado por par�metro do 
main para este m�dulo como refer�ncia. Imprima no Main o resultado  da soma.*/

#include<stdio.h>

void soma1(int x);
int soma2(int x);
void soma3(int x, int *r);


int main(void)
{
	int n, retorno, ret = 0;
	
	printf("\n Digite o valor do n: ");
	scanf("%d", &n);
	
	soma1(n); //Primeira forma
	
	retorno = soma2(n); //Segunda forma
	printf("\n Total da soma 2: %d", retorno);
	
	soma3(n, &ret); //Terceira forma
	printf("\n Total da soma 3: %d", ret);
		
	return 0; 
}

void soma1(int x) //Primeira forma 
{
	int i, soma = 0;
	
	for (i = 1; i <= x; i++)
	{
		soma = soma + i;
	}
	
	printf("\n Total da soma 1: %d", soma);	
}

int soma2(int x) //Segunda forma
{
	int i, soma = 0;
	
	for (i = 1; i <= x; i++)
	{
		soma = soma + i;
	}
	
	return soma; 	
}

void soma3(int x, int *r) //Terceira forma
{
	int i; // A var�vel *r poderia ter sido zerada aqui, *r = 0;
	
	for (i = 1; i <= x; i++)
	{
		*r = *r + i;
	}	
}
