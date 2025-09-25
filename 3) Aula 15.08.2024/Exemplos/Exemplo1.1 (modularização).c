/*
* Iniciando a modulari��o, fazendo um procedimento o qual n�o tem retorno. 
Ele executa as informa��es e volta vazio, pode at� ir com algum dado, mas sempre vai voltar vazio
* Vari�veis gloobais s�o declaradas antes do escopo e vari�veis locais s�o apenas as que est�o dentro dele
* Void � usado todas as vezes em que o m�dulo volta vazio
* O compilador olha apenas o que tem acima do "main", mas � poss�vel prototipar a fun��o para obrigar ele a olha o programa inteiro.
* Quando h� retorno de dados em um m�dulo devo declarar ele com a v�riavel que ir� retornar 
* � importante sempre prototipar, pois assim n�o � necess�rio se preocupar com a ordem dem que os m�dulos se apresentam no programa*/

#include<stdio.h>
#include<stdlib.h> // biblioteca para usar a fun��o de limpar a tela no arquivo cpp

// �rea de prototipa��o

void cabecalho();
void somar1(int x, int y); //Pode ser colocado apenas o tipo da v�riavel e n�o o nome dela
int somar2(int, int);

//***********************

void cabecalho() // Quando nomeio como void quer dizer que ele volta vazio 
{
	printf("\n ************************************************");
	printf("\n Uniftec");
	printf("\n Curso: analise de desenvolvimento de sistemas");
	printf("\n Programador: Eduarda");
	printf("\n Versao 1.0");
	printf("\n ************************************************");
	
	// Quando volta com alguma informa��o ele tem uma linha de "return ?"
}

void somar1(int x, int y) //Precisa declarar as vari�veis entre par�nteses na ordem que se manda no esqueleto do c�dig
{
	int total; 
	
	total = x + y; // � preciso mandar somar o x e o y ao inv�s do a e o b, pois neste escopo n�o existem as v�riaveis a e b 
	
	printf("\n Valor da soma 1: %d", total); // � preciso printar aqui, pois ele vem cheio mas volta vazio. 
}

int somar2(int x, int y) //Fun��o inteira: vai retornar o valor ao c�digo
{
	int total; 
	
	total = x + y; 
	
	return total; // Leva o valor de volta ao c�digo
}

int main (void)
{
	int a, b, tot;
	
	cabecalho(); // Quando n�o tem nada dentro dos par�nteses quer dizer que quando chamo o m�dulo ele est� indo vazio 
	
	printf("\n Digite um valor para A: ");
	scanf("%d", &a);
	
	system("cls"); // limpa a tela
	cabecalho(); // chamar o m�dulo novamente, pois se n�o ele n�o aparece mais 
	
	printf("\n Digite um valor para B: ");
	scanf("%d", &b);
	
	system("cls"); 
	cabecalho();
	
	somar1(a,b); //Significa que vai pegar o valor e levar para o m�dulo somar1
	tot = somar2(a,b); // � necess�rio o tot pois precisa que algu�m receba o resultado do m�dulo e tem que ser declarado antes
	
	printf("\n Resultado da soma 2 com retorno: %d", tot);
	
	printf("\n Resultado da soma 2 com retorno: %d", somar2(a,b)); /* Retorno sem que seja necess�rio armazenar a vari�vel, por�m tem a desvantagem
	 																de n�o poder usar em base de outros c�lculos pois ela n�o esta armazenada */ 
	
	
	return 0; 
}

	
