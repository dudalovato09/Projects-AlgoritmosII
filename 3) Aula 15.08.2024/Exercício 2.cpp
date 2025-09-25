/*Fazer um programa que leia um ano e chame uma fun��o que receba como par�metro o ano e retorne 1 se  
for um ano bissexto e 0 se n�o for um ano bissexto. A fun��o main() deve mostrar a mensagem apropriada.

Dicas: Um ano � bissexto se for divis�vel por 400.

Um ano tamb�m � bissexto se for divis�vel por 4, mas n�o por 100.*/

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
		printf("%d � um ano bissexto!", ano);
	}else{
		printf("%d n�o � um ano bissexto!", ano);
	}
}
