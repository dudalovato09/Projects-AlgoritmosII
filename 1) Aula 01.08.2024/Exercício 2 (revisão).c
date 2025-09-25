/* Ler 10 valores positivos e armazene em um vetor. 
Caso o usuário digitar um valor errado deve informar uma frase na tela e fazer ele repetir até acertar. 
Calcular e Imprimir a média de todos os valores CORRETOS lidos ( OS VALORES INCORRETOS NÃO DEVEM SER UTILIZADOS NO CÁLCULO DA MÉDIA). 
Para a validação do valor lido, utilize o laço de repetição do..while.*/

#include<stdio.h> // biblioteca comandos entrada e saída
#include<math.h> // biblioteca matemática

int main(void)
{
	float x[10], total = 0, media = 0;
	int conta;
	
	for(conta = 0; conta <= 9; conta++){ // Laço para ler a posição do vetor
	
		do{
			
			printf("\n Digite um valor positivo para o vetor X [%d]:", conta + 1); // Para  inicializar a posição com 1 escrever conta + 1 
			scanf("%f", &x[conta]);
			
			if(x[conta] < 0){
				
				printf("\n Valor incorreto. Por favor redigite!");	
				
			}
		}while (x[conta] < 0);
		
		total = total + x[conta];
	}
	
	media = total / 10;
	
	printf("\n Media calculada: %.2f", media);
	
	return 0;
}
