/* 
* Iniciando a modulari��o, fazendo um procedimento o qual n�o tem retorno. Ele executa as informa��es e volta vazio, pode at� ir com algum dado, mas sempre vai voltar vazio
* O compilador olha apenas o que tem acima do "main", mas � poss�vel prototipar a fun��o para obrigar ele a olha o programa inteiro.*/

#include<stdio.h> 

// �rea de prototipa��o

void cabecalho();

//******************

int main (void)
{
	cabecalho(); // Quando n�o tem nada dentro dos par�nteses quer dizer que quando chamo o m�dulo ele est� indo vazio 
	
	
	return 0; 
}

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
