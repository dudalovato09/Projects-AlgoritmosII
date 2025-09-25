/* Exemplo 1 moodle*/

#include<stdio.h>
#include<stdlib.h>

//=======================================
void cabecalho();
void somar(int x, int y);
int multiplica(int x, int y);
void linha();

//===========================================
int main(void)
{
	int a,b, resultado;
	cabecalho();
	
		printf("\nDigite o valor para a:");
		scanf("%d", &a) ;
		
		system("cls");
		
	cabecalho();
	
		printf("\nDígito do valor para b:");
		scanf("%d", &b) ;
		
		system("cls");
		
	cabecalho();
	soma(a,b);
	
	resultado=multiplica( a,b);
	
	printf("\nResultado da Multiplicação %d", resultado);
	
	system("pausa");
	
	return 0;
}



void cabecalho()// ? void que não retorna nada, vazio
{
	linha();
	printf("\nProgramador: Neiva");
	printf("\nCurso: Computação");	
	printf("\nIES: UNIFTEC");
	linha();
	
}

void linha()// ? void que n?o retorna nada, vazio
{
	printf("\n****************************");
}

void soma(int x, int y)
{
	int total;
	total = x+y;
	printf("\nTotal da soma = %d", total);
}

int multiplica(int x, int y)
{
	int total;
	total = x*y;
	return total;

}
