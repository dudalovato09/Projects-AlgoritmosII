/*  Escreva um programa que cont�m uma fun��o de nome �fatorial�, a qual recebe por par�metro um n�mero inteiro e positivo, 
tamb�m, que calcule e retorne como resultado o fatorial do n�mero recebido como par�metro. 
Na fun��o main, o programa deve ler um n�mero do usu�rio e mostrar como resultado o valor do 
fatorial do n�mero lido. Obs. Se n�o lembrar a defini��o de fatorial, realize uma pequena pesquisa para verificar como se calcula.*/

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

		printf("\n Digite um n�mero inteiro e positivo: ");
		scanf("%d", &numero);
	
		if(numero <= 0){
		
			printf("\n Valor inv�lido, por favor redigite");
		}
	
	}while (numero <= 0);
	
	fatorial(numero);
	result = fatorial(numero);
	
	printf("\n Fatorial de %d �: %d", numero, result);
	
	return 0;
}
