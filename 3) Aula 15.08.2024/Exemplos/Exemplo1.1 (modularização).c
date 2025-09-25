/*
* Iniciando a modularição, fazendo um procedimento o qual não tem retorno. 
Ele executa as informações e volta vazio, pode até ir com algum dado, mas sempre vai voltar vazio
* Variáveis gloobais são declaradas antes do escopo e variáveis locais são apenas as que estão dentro dele
* Void é usado todas as vezes em que o módulo volta vazio
* O compilador olha apenas o que tem acima do "main", mas é possível prototipar a função para obrigar ele a olha o programa inteiro.
* Quando há retorno de dados em um módulo devo declarar ele com a váriavel que irá retornar 
* É importante sempre prototipar, pois assim não é necessário se preocupar com a ordem dem que os módulos se apresentam no programa*/

#include<stdio.h>
#include<stdlib.h> // biblioteca para usar a função de limpar a tela no arquivo cpp

// Área de prototipação

void cabecalho();
void somar1(int x, int y); //Pode ser colocado apenas o tipo da váriavel e não o nome dela
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
	
	// Quando volta com alguma informação ele tem uma linha de "return ?"
}

void somar1(int x, int y) //Precisa declarar as variáveis entre parênteses na ordem que se manda no esqueleto do códig
{
	int total; 
	
	total = x + y; // É preciso mandar somar o x e o y ao invés do a e o b, pois neste escopo não existem as váriaveis a e b 
	
	printf("\n Valor da soma 1: %d", total); // É preciso printar aqui, pois ele vem cheio mas volta vazio. 
}

int somar2(int x, int y) //Função inteira: vai retornar o valor ao código
{
	int total; 
	
	total = x + y; 
	
	return total; // Leva o valor de volta ao código
}

int main (void)
{
	int a, b, tot;
	
	cabecalho(); // Quando não tem nada dentro dos parênteses quer dizer que quando chamo o módulo ele está indo vazio 
	
	printf("\n Digite um valor para A: ");
	scanf("%d", &a);
	
	system("cls"); // limpa a tela
	cabecalho(); // chamar o módulo novamente, pois se não ele não aparece mais 
	
	printf("\n Digite um valor para B: ");
	scanf("%d", &b);
	
	system("cls"); 
	cabecalho();
	
	somar1(a,b); //Significa que vai pegar o valor e levar para o módulo somar1
	tot = somar2(a,b); // É necessário o tot pois precisa que alguém receba o resultado do módulo e tem que ser declarado antes
	
	printf("\n Resultado da soma 2 com retorno: %d", tot);
	
	printf("\n Resultado da soma 2 com retorno: %d", somar2(a,b)); /* Retorno sem que seja necessário armazenar a variável, porém tem a desvantagem
	 																de não poder usar em base de outros cálculos pois ela não esta armazenada */ 
	
	
	return 0; 
}

	
