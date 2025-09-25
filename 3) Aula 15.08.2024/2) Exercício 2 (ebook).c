/* Escreva um programa para ler as notas das duas avalia��es de um aluno no semestre. 
Fa�a uma fun��o que receba as duas notas por par�metro e calcule, logo escreva a m�dia 
semestral e a mensagem �PARAB�NS! Voc� foi aprovado! � Somente se o aluno foi aprovado 
(considere 6.0 a m�dia m�nima para aprova��o).*/

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
	
	printf ("\n Digite a nota da primeira avalia��o: ");
	scanf("%f", &nota_1);
	
	printf ("\n Digite a nota da segunda avalia��o: ");
	scanf("%f", &nota_2);
	
	calculo (nota_1, nota_2);
	result = calculo(nota_1, nota_2);
	
	if (result >= 6){
		
		printf("\n Parab�ns! Voc� foi aprovado :)");
		printf("\n Sua m�dia foi %.2f", result);	
		
	}else{
		
		printf("\n Sinto muito! Voc� foi reprovado :(");
		printf("\n Sua m�dia foi %.2f", result);
		
	}
	
	return 0; 
}
