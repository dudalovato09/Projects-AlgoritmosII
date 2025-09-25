/* 
* Iniciando a modularição, fazendo um procedimento o qual não tem retorno. Ele executa as informações e volta vazio, pode até ir com algum dado, mas sempre vai voltar vazio
* O compilador olha apenas o que tem acima do "main", mas é possível prototipar a função para obrigar ele a olha o programa inteiro.*/

#include<stdio.h> 

// área de prototipação

void cabecalho();

//******************

int main (void)
{
	cabecalho(); // Quando não tem nada dentro dos parênteses quer dizer que quando chamo o módulo ele está indo vazio 
	
	
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
	
	// Quando volta com alguma informação ele tem uma linha de "return ?"
}
