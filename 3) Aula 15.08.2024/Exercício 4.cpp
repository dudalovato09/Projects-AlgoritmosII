/* Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. 
Se a letra for A o procedimento calcula a média aritmética das notas do aluno, 
se for P, a sua média ponderada (pesos: 5, 3 e 2). A média calculada 
deve ser retornada a função main e impressa.*/

#include <stdio.h>
#include <locale.h>

void escolha(){
	printf("\nA - Aritmétrica");
	printf("\nP - Ponderada");
}

float arit(float n1, float n2, float n3){
	 return n1+n2+n3/3;
}

float pond(float n1, float n2, float n3){
	return (n1*5) + (n2*3) + (n3*2) / 10;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	char opcao;
	
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota:");
	scanf("%f", &n3);
	
	printf("Escolha entre Média Aritmétrica (A) ou Média Ponderada (P):");
	scanf(" %c", &opcao);
	
	switch(opcao){
		case 'A':
			media = arit(n1,n2,n3);
			printf("Resultado da Média Aritmétrica: %.2f",media);
			break;
		case 'P':
			media = pond(n1,n2,n3);
			printf("Resultado da Média Ponderada: %.2f",media);
			break;
	}
			
}
