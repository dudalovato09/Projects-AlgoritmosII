/* Escreva um programa para ler as notas das duas avaliações de um aluno no semestre. 
Faça uma função que receba as duas notas por parâmetro e calcule, logo escreva a média 
semestral e a mensagem “PARABÉNS! Você foi aprovado! “ Somente se o aluno foi aprovado 
(considere 6.0 a média mínima para aprovação).*/

#include<stdio.h>
#include<locale.h>

float calculo (float x, float y);

float calculo (float x, float y){
	
	float soma, media; 
	
	soma = x + y;
	media = soma / 2; 
	return media;	
}

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	float nota_1, nota_2, result; 
	
	printf ("\n Digite a nota da primeira avaliação: ");
	scanf("%f", &nota_1);
	
	printf ("\n Digite a nota da segunda avaliação: ");
	scanf("%f", &nota_2);
	
	calculo (nota_1, nota_2);
	result = calculo(nota_1, nota_2);
	
	if (result >= 6){
		
		printf("\n Parabéns! Você foi aprovado :)");
		printf("\n Sua média foi %.2f", result);	
		
	}else{
		
		printf("\n Sinto muito! Você foi reprovado :(");
		printf("\n Sua média foi %.2f", result);
		
	}
	
	return 0; 
}
