/* Exemplo 2 do moodle*/

#include<stdio.h>
#include<stdlib.h>
// espa?o para desenvolvimento dos m?dulos
//====================================================
void cabecalho( );
int somar( int x  ,int y  );
void somar2( int x  ,int y  );
void linha();
//====================================================
main()
{
	
	int a,b,x, total;
	cabecalho();// chama o modulo cabecalho()
	printf("Digite o valor de a:");
	scanf("%d", &a);
	system("cls");// limpa a tela
	cabecalho(); // chama o modulo cabecalho()
	printf("Digite o valor de b:");
	scanf("%d", &b);
	total=somar(a,b);  // chama o modulo somar()
	printf("\nResultado da soma1 = %d", total);
	somar2(a,b);
	x=quadrado(a+3) + quadrado(b);
	printf("\nResultado do quadrado = %d", x);
	
}

int quadrado(int x)
{
	
	return x*x;
}

int somar( int x  ,int y  )
{
	int res;
	res = x+y;
	return res;
	
}
void somar2( int x  ,int y  )
{
	int res;
	res = x+y;
	printf("\nResultado do somar2 = %d", res);
	
}
void linha()
{
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
	
}
void cabecalho( )
{
	
	linha();
	printf("\nProgramador: Neiva L. Kuyven");
	printf("UNIFTEC");
	printf("\nVers?o 1.0");
	linha();
	printf("\n\n\n");
	
}

