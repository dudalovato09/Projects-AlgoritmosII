/* Exemplo 3 moodle*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void menu(); // Prototipa o procedimento
int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float div(float x, float y);

void menu()
{
	system("cls");
	printf("1 - SOMA ");
	printf("2 - SUBTRACAO ");
	printf("3 - MULTIPLICACAO ");
	printf("4 - DIVISAO ");
	printf("5 - SAIR ");
}

int soma (int x, int y)
{
	int t = x + y;
	return t;
}

int subt (int x, int y)
{
	int t = x - y;
	return t;
}

int mult (int x, int y)
{
	int t = x * y;
	return t;
}

float div (float x, float y)
{
	float t = x / y;
	return t;
}

int main (void)
{
	int a, b, opcao = 1;

	while(opcao != 5){
		
	menu();
		printf("DIGITE A OPCAO DESEJADA : ");
		scanf("%d",&opcao);
	
	while(opcao < 1 || opcao > 5){
		
	printf("Opcao Invalida! Informe Novamente: ");
	scanf("%d",&opcao);
	}
	
	if (opcao < 5){
		
		printf("Informe valor A: ");
		scanf("%d",&a);
		printf("Informe valor B: ");
		scanf("%d",&b);
	}

	switch(opcao){

	case 1:
		printf(" Resultado: %d ", soma(a, b));
		break;
	case 2:
		printf(" Resultado: %d ", subt(a, b));
		break;
	case 3:
		printf(" Resultado: %d ", mult(a, b));
		break;
	case 4:
		printf(" Resultado: %.2f ", div(float(a), float(b)));
		break;
	default:
		printf(" Programa Encerrado! ");
	}
	getch();
	}
	
	system("Pause");
	
	return 0; 
}
