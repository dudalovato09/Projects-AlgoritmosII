/* Fazer um programa que leia o pre�o de uma mercadoria e o percentual de reajuste e chame fun��o que
receba estes valores como par�metro e retorne o novo pre�o da mercadoria com reajuste. Na fun��o main()  
deve ser mostrado o pre�o da mercadoria depois do aumento, bem como o percentual aplicado.*/


#include<stdio.h>
#include <locale.h>

float reajuste(float preco, float percentual){
	return preco + (preco * (percentual / 100));
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	float preco, percentual, novoValor;
	
	printf("Digite o pre�o da mercadoria R$");
	scanf("%f", &preco);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &percentual);
	
	novoValor = reajuste(preco, percentual);
	
	printf("\nO novo pre�o da mercadoria �: R$ %.2f", novoValor);
	printf("\nO percentual de reajuste foi: %.2f%%", percentual);
	
}
