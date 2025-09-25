/* Fazer um programa que leia o preço de uma mercadoria e o percentual de reajuste e chame função que
receba estes valores como parâmetro e retorne o novo preço da mercadoria com reajuste. Na função main()  
deve ser mostrado o preço da mercadoria depois do aumento, bem como o percentual aplicado.*/


#include<stdio.h>
#include <locale.h>

float reajuste(float preco, float percentual){
	return preco + (preco * (percentual / 100));
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	float preco, percentual, novoValor;
	
	printf("Digite o preço da mercadoria R$");
	scanf("%f", &preco);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &percentual);
	
	novoValor = reajuste(preco, percentual);
	
	printf("\nO novo preço da mercadoria é: R$ %.2f", novoValor);
	printf("\nO percentual de reajuste foi: %.2f%%", percentual);
	
}
