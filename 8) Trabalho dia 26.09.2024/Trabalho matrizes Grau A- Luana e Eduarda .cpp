#include <stdio.h>       
#include <stdlib.h>       
#include <conio.h>       
#include <locale.h>

// Trabalho de matrizes 
// Alunos: Luana Alves e Eduarda Lovato

// Declaração dos Módulos do programa.
int menu(int *op); // Módulo para exibir o menu e capturar a escolha do usuário.
void cadastro(int matriz_c[50][2], int tam); // Módulo para cadastro do estoque inicial.
void relatorio_p(int matriz_c[50][2], int tam, float vetor_relatorio[3]); // Módulo para registro de pedidos dos clientes.
void relatorio_e(int matriz_c[50][2], int tam); // Módulo para exibir o estoque final.
void relatorio_g(float vetor_relatorio[3]); // Módulo para exibir o relatório geral.

int menu(int *op){ 
    // Módulo para exibir o menu principal.
    // O módulo não retorna valor, mas altera o valor de 'op' através de ponteiro.
	printf("--- Bem vindo ao R&A Eletrônicos ---\n");
	printf("\n1- Cadastrar o estoque inicial");
	printf("\n2- Registro de Pedidos do Cliente");
	printf("\n3- Relatório do estoque");
	printf("\n4- Relatório Geral");
	printf("\n5- Sair\n");
	scanf("%d", op); // Recebe a opção do usuário.
	system("cls"); // Limpa a tela.
}

void imprimir(int x[50][2], int tam){
    // Módulo auxiliar para imprimir o conteúdo da matriz.
	for(int i = 0; i < tam; i++){
		printf("Código %d | Quantidade %d", x[i][0], x[i][1]);
		printf("\n\n");
	}
}

int main(void){
	
	//Declaração de variáveis
	int matriz_c[50][2] = {0}, op, tam; 
	bool cad = false; 
	float vetor_relatorio[3] = {0}; 
	
	// Biblioteca para português
	setlocale(LC_ALL, "");
	
	do{
		// Abre o menu
		menu(&op); 

		switch(op){
			case 1:
			    // Cadastro do estoque inicial.
				printf("Digite quantos itens quer cadastrar na promoção:\n");
				scanf("%d", &tam); 
				if(tam > 50){ 
					system("cls");
					printf("Valor inválido. Redigite um número de itens menor ou igual a 50!\n");
					system("pause");
					break;
				}
				else{
					cadastro(matriz_c, tam); // Chama a função de cadastro.
					cad = true; 
					break;
				}
				
			case 2:	
			    // Registro de pedidos dos clientes.
				if(cad){
					relatorio_p(matriz_c, tam, vetor_relatorio); 
				}
				else{
					printf("Cadastre os produtos na promoção na opção 1!\n");
					system("pause");
				}
				break;

			case 3:
			    // Exibe o relatório de estoque.
				if(cad){
					relatorio_e(matriz_c, tam); 
				}else{
					printf("Cadastre os produtos na promoção na opção 1!\n");
					system("pause");
				}
				break;

			case 4:
			    // Relatório geral.
				relatorio_g(vetor_relatorio); 
				break;

			case 5:
			    // Sai do programa.
				system("cls");
				printf("Obrigada por comprar conosco!\n");
				system("pause");
				break;

			default:
			    // Caso o usuário insira uma opção inválida.
				system("cls");
				printf("Valor inválido. Redigite uma opção entre 1 e 5!\n");
				system("pause");
				break;
		}
		
		system("cls"); // Limpa a tela.
		
	}while(op != 5); // Repete o menu até que a opção 5 (sair) seja escolhida.
}

void cadastro(int matriz_c[50][2], int tam){
    // Módulo para cadastrar os produtos na matriz.
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < 2; j++){
			if(j == 0) 
			    printf("Digite o código do item %i\n", i+1);
			else 
			    printf("Digite a quantidade do item %i\n", i+1); 
			scanf("%d", &matriz_c[i][j]); 
		}
	}
}

void relatorio_p(int matriz_c[50][2], int tam, float vetor_relatorio[3]){
    // Módulo para registrar um pedido de cliente e atualizar o estoque.
	char nome[50]; 
	int cod, quant, flag_cod = 1;

	printf("Lista de códigos e quantidades de produtos: \n");
	imprimir(matriz_c, tam); // Exibe os produtos cadastrados.

	printf("Digite o nome do cliente: \n");
	fflush(stdin); 
	scanf("%s", &nome); 

	printf("Digite o código do produto: \n");
	scanf("%d", &cod);

	printf("Digite a quantidade de produtos: \n");
	scanf("%d", &quant);

	// Verifica se o produto existe no estoque e se há quantidade suficiente.
	for(int i = 0; i < tam; i++){
		if(matriz_c[i][0] == cod){
			if(matriz_c[i][1] < quant){
				flag_cod = 0;
				system("cls");
				printf("Cliente: %s | Não temos a mercadoria suficiente em estoque!\n", nome);
				system("pause");
				break;
			}
			else{
				flag_cod = 0;
				vetor_relatorio[0]++; // Incrementa o número de pedidos realizados.
				vetor_relatorio[1] += quant; // Adiciona à quantidade total de produtos vendidos.
				matriz_c[i][1] -= quant; // Atualiza o estoque.
				break;
 			}
		}
	}
	
	// Caso o código do produto não seja encontrado.
	if(flag_cod){
		system("cls");
		printf("O produto com o código digitado não se encontra em promoção!\n");
		system("pause");
	}
}

void relatorio_e(int matriz_c[50][2], int tam){
    // Módulo para exibir o estoque atual.
	printf("--- Estoque Final ---\n");
	for(int i = 0; i < tam; i++){
		printf("Código %d - Quantidade %d", matriz_c[i][0], matriz_c[i][1]);
		printf("\n");
	}
	system("pause");
}

void relatorio_g(float vetor_relatorio[3]){
    // Módulo para exibir o relatório geral dos pedidos.
	if(vetor_relatorio[1] != 0 && vetor_relatorio[0] != 0)
	    vetor_relatorio[2] = vetor_relatorio[1] / vetor_relatorio[0]; 
	
	printf("--- Relatório Final ---\n");
	printf("Total de pedidos realizados: %.2f\n", vetor_relatorio[0]);
	printf("Total de produtos vendidos: %.2f\n", vetor_relatorio[1]);
	printf("Média de produtos vendidos por pedido: %.2f\n", vetor_relatorio[2]);
	
	system("pause");
}

