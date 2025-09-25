/*2. Elabore uma sub-rotina/módulo que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal(main) o seu volume. 
Desenvolva de 2 formas - uma com return e outra com passagem por Referência.

Fórmula v= 4/3 * pi * raio3 */

#include<stdio.h>
#include<math.h>

float calculo1(float x);
void calculo2(float x, float *vol);

int main (void)
{
	float raio, v, vol = 0;
	
	printf("\n Digite o valor do raio: ");
	scanf("%f", &raio);
	
	v = calculo1(raio); //Primeira forma 
	printf("\n Valor do volume 1: %.2f", v);
	
	calculo2(raio, &vol); // Segunda forma
	printf("\n Valor do volume 2: %.2f", vol);
	
	return 0;
}

float calculo1(float x) // Primeira forma 
{
	float volume, pi = 3.1415;

	volume = (4/3) * pi * pow(x, 3);
	
	return volume;
}

void calculo2(float x, float *v) // Segunda forma 
{
	float pi = 3.1415;

	*v = (4/3) * pi * pow(x, 3);
	
}
