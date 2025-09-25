/*Fazer um programa que leia um ano e chame uma função que receba como parâmetro o ano e retorne 1 se  
for um ano bissexto e 0 se não for um ano bissexto. A função main() deve mostrar a mensagem apropriada.

Dicas: Um ano é bissexto se for divisível por 400.

Um ano também é bissexto se for divisível por 4, mas não por 100.*/

#include<stdio.h>
#include<locale.h>

int anoBi(int ano){
	if (ano % 400 == 0){
		return 1;
	}
	else if(ano % 100 == 0){
		return 0;
	}else if(ano % 4 == 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	if(anoBi(ano)){
		printf("%d é um ano bissexto!", ano);
	}else{
		printf("%d não é um ano bissexto!", ano);
	}
}
