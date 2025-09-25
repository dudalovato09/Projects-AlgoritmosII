/* 1. Faça uma sub-rotina/modulo que receba um número inteiro positivo N como Parâmetro 
e retorne a soma dos Números inteiros entre o número 1 e o N (inclusive). 
Primeira forma: desenvolva um módulo/procedimento que calcula a soma dos valores e imprime a soma no próprio módulo.

Segunda forma:desenvolva um módulo/função que retorne o valor da soma para o main, utilizando return.

Terceira forma: desenvolva um módulo que utilize passagem por referência, onde o valor da soma deve ser passado por parâmetro do 
main para este módulo como referência. Imprima no Main o resultado  da soma.*/

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
	int i; // A varável *r poderia ter sido zerada aqui, *r = 0;
	
	for (i = 1; i <= x; i++)
	{
		*r = *r + i;
	}	
}
