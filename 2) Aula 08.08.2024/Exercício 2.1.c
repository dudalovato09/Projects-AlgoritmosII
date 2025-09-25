/* Desenvolva um programa que receba o n�mero sorteado em um dado
  durante 10 jogadas ( vetor de 10 posi��es ), mostre os n�meros
  sorteados e a frequ�ncia com que aparecem. Armazenar a frequ�ncia
  (contagem da quantidade de cada face do dado) em um vetor de 6 posi��es */

#include <stdio.h>
#include<locale.h>

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int i, nums[10] = {0}, freq[6] = {0};
	
	// armazenar os valores no vetor
	for (i = 0; i<10; /* n�o fazer nada */) {
		
		printf("Insira o valor sorteado em um dado [%d]: ", i+1);
		fflush(stdin);
		
		if (1 == scanf("%d", &nums[i])) i++;
			else 
				printf("ERRO ao ler valor! Tente novamente:\n");
	
				if (nums[i-1] < 1 || nums[i-1] > 6) {
					
					printf("ERRO: o valor informado deve ser entre 1 e 6! Tente novamente!");
					i--;
		}
	}
	
	// imprimir o vetor informado
	printf("\n\nVETOR DOS N�MEROS SORTEADOS:\n[ ");
	
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	
	printf("]");
	
	// calcular as frequ�ncias
	for (i = 0; i<10; i++) {
		freq[nums[i] - 1] += 1;
	}
	
	// imprimir o vetor de frequ�ncias
	printf("\n\nVETOR DE FREQU�NCIAS:\n[ ");
	
	for (i = 0; i<6; i++) {
		printf("%d ", freq[i]);
	}
	
	printf("]");

	return 0;
}
