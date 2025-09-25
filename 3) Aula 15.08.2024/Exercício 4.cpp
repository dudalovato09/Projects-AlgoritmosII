/* Escreva uma fun��o que recebe as 3 notas de um aluno por par�metro e uma letra. 
Se a letra for A o procedimento calcula a m�dia aritm�tica das notas do aluno, 
se for P, a sua m�dia ponderada (pesos: 5, 3 e 2). A m�dia calculada 
deve ser retornada a fun��o main e impressa.*/

#include <stdio.h>
#include <locale.h>

void escolha(){
	printf("\nA - Aritm�trica");
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
	
	printf("Escolha entre M�dia Aritm�trica (A) ou M�dia Ponderada (P):");
	scanf(" %c", &opcao);
	
	switch(opcao){
		case 'A':
			media = arit(n1,n2,n3);
			printf("Resultado da M�dia Aritm�trica: %.2f",media);
			break;
		case 'P':
			media = pond(n1,n2,n3);
			printf("Resultado da M�dia Ponderada: %.2f",media);
			break;
	}
			
}
