/* Passagem de parâmetros por referência 

Este exercício troca os valores das variáveis

* Váriavel Local: toda a váriavel declarada dentro de uma função ou escopo
* Variável Global: toda a váriavel declarada fora das funções ou escopos, sempre declarada após das bibliotecas 
* Quando há uma váriavle global e local com o mesmo nome ao executar sempre vai ser considerado o local primeiro
* Uma váriavel global é boa, pois pode ser usada sem que tenha que ficar passando de um módulo para outro, 
porém tem problema de memória já que só desaloca quando fecha o programa
*/

#include<stdio.h>
#include<conio.h>

void troca ( int *a, int *b); // O * é necessário para troca de informações nas variáveis

int main(void)
{
  int num1, num2;
  
  	printf("Digite o primeiro valor inteiro: ");
  	scanf("%d",&num1);
  	
  	printf("Digite o segundo valor inteiro: ");
  	scanf("%d",&num2);
  	
  	printf("\n num1 = %d e num2 = %d", num1, num2);

  	troca(&num1, &num2); // O simbolo & significa o endereço físico
 	printf("\n num1 = %d e num2 = %d", num1, num2);
 	 
 	return 0;
}

void troca (int *a, int *b) // dois parametros por referência
{
  int aux;
  
  aux = *a;
  *a = *b;
  *b = aux;
}


