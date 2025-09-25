/* 3. Crie uma sub-rotina/módulo que receba como parâmetro a altura e o sexo de uma pessoa e retorne o seu peso ideal.  
Desenvolva de 2 formas - uma com return e outra com passagem por Referência.

Para HOMENS, deverá calcular o peso ideal usando a Fórmula peso_ideal = 72.7 * altura - 58
Para as MULHERES, deve calcular o peso ideal usando a Fórmula peso_ideal = 62.1 * altura - 44.7 */

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

void peso_homem(float x, float *result);
float peso_mulher(float x);

int main (void)
{
	setlocale(LC_ALL, "portuguese");
	
	float altura, peso, result = 0;
	char sexo;
	
	printf("\n Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("\n Digite seu sexo F - Feminino, M - masculino: ");
	fflush(stdin);
	sexo = getche ();
	
	switch(sexo){
		
		case 'F':
			
		peso = peso_mulher(altura);
		printf("\n Seu peso ideal é: %.2f Kg", peso);
		break; 
		
		case 'M':
			
		peso_homem(altura, &result);
		printf("\n Seu peso ideal é: %.2f Kg", result);
		break; 
	
	}
}
void peso_homem(float x, float *result){
	
	*result = (72.7 * x) - 58;
}

float peso_mulher(float x){
	
	float peso_ideal;
	
	peso_ideal = (62.1 * x) - 44.7;
	
	return peso_ideal; 
}

