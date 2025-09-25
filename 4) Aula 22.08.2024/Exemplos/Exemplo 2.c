/* Este � um exemplo para leitura de vari�veis com passagem por refer�ncia. 

* O "*" � um ponteiro
* Par�nteses primeiro, depois as fun��es e ap�s isso a divis�o, multiplica��o...*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//prototipa��o das fun��es

int quadrado (int num);
void ler_numero(int *val);

// fun��o principal

int main(void)
{
   int x, y, soma;
   
   ler_numero(&x);
   ler_numero(&y); // Reuso de c�digo
   
   soma = quadrado(x) + quadrado(y);
   
   printf( "\n Soma dos quadrados : %d", soma);
   
   return 0;
}

void ler_numero (int *val) // M�dulo para ler um n�mero positivo
{
  do
  {
     printf ("\n Entre com um numero positivo:");
     scanf ("%d", val); // O val j� � o apontador, por isso n�o se deve colocar o & antes. 
     
  }while (*val < 0);
}

int quadrado (int num) // M�dulo que calcula o quadrado de um n�mero
{
   return num * num;
}
