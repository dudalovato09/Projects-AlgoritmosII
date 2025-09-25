/* Passagem de par�metros por refer�ncia 

Este exerc�cio troca os valores das vari�veis

* V�riavel Local: toda a v�riavel declarada dentro de uma fun��o ou escopo
* Vari�vel Global: toda a v�riavel declarada fora das fun��es ou escopos, sempre declarada ap�s das bibliotecas 
* Quando h� uma v�riavle global e local com o mesmo nome ao executar sempre vai ser considerado o local primeiro
* Uma v�riavel global � boa, pois pode ser usada sem que tenha que ficar passando de um m�dulo para outro, 
por�m tem problema de mem�ria j� que s� desaloca quando fecha o programa
*/

#include<stdio.h>
#include<conio.h>

void troca ( int *a, int *b); // O * � necess�rio para troca de informa��es nas vari�veis

int main(void)
{
  int num1, num2;
  
  	printf("Digite o primeiro valor inteiro: ");
  	scanf("%d",&num1);
  	
  	printf("Digite o segundo valor inteiro: ");
  	scanf("%d",&num2);
  	
  	printf("\n num1 = %d e num2 = %d", num1, num2);

  	troca(&num1, &num2); // O simbolo & significa o endere�o f�sico
 	printf("\n num1 = %d e num2 = %d", num1, num2);
 	 
 	return 0;
}

void troca (int *a, int *b) // dois parametros por refer�ncia
{
  int aux;
  
  aux = *a;
  *a = *b;
  *b = aux;
}


