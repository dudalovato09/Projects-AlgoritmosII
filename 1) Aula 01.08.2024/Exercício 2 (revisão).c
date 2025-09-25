/* Ler 10 valores positivos e armazene em um vetor. 
Caso o usu�rio digitar um valor errado deve informar uma frase na tela e fazer ele repetir at� acertar. 
Calcular e Imprimir a m�dia de todos os valores CORRETOS lidos ( OS VALORES INCORRETOS N�O DEVEM SER UTILIZADOS NO C�LCULO DA M�DIA). 
Para a valida��o do valor lido, utilize o la�o de repeti��o do..while.*/

#include<stdio.h> // biblioteca comandos entrada e sa�da
#include<math.h> // biblioteca matem�tica

int main(void)
{
	float x[10], total = 0, media = 0;
	int conta;
	
	for(conta = 0; conta <= 9; conta++){ // La�o para ler a posi��o do vetor
	
		do{
			
			printf("\n Digite um valor positivo para o vetor X [%d]:", conta + 1); // Para  inicializar a posi��o com 1 escrever conta + 1 
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
