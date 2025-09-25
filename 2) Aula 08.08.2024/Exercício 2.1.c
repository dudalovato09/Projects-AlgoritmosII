/* Desenvolva um programa que receba o número sorteado em um dado
  durante 10 jogadas ( vetor de 10 posições ), mostre os números
  sorteados e a frequência com que aparecem. Armazenar a frequência
  (contagem da quantidade de cada face do dado) em um vetor de 6 posições */

#include <stdio.h>
#include<locale.h>

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int i, nums[10] = {0}, freq[6] = {0};
	
	// armazenar os valores no vetor
	for (i = 0; i<10; /* não fazer nada */) {
		
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
	printf("\n\nVETOR DOS NÚMEROS SORTEADOS:\n[ ");
	
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	
	printf("]");
	
	// calcular as frequências
	for (i = 0; i<10; i++) {
		freq[nums[i] - 1] += 1;
	}
	
	// imprimir o vetor de frequências
	printf("\n\nVETOR DE FREQUÊNCIAS:\n[ ");
	
	for (i = 0; i<6; i++) {
		printf("%d ", freq[i]);
	}
	
	printf("]");

	return 0;
}
