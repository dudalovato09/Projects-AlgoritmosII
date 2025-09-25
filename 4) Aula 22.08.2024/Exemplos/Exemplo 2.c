/* Este é um exemplo para leitura de variáveis com passagem por referência. 

* O "*" é um ponteiro
* Parênteses primeiro, depois as funções e após isso a divisão, multiplicação...*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//prototipação das funções

int quadrado (int num);
void ler_numero(int *val);

// função principal

int main(void)
{
   int x, y, soma;
   
   ler_numero(&x);
   ler_numero(&y); // Reuso de código
   
   soma = quadrado(x) + quadrado(y);
   
   printf( "\n Soma dos quadrados : %d", soma);
   
   return 0;
}

void ler_numero (int *val) // Módulo para ler um número positivo
{
  do
  {
     printf ("\n Entre com um numero positivo:");
     scanf ("%d", val); // O val já é o apontador, por isso não se deve colocar o & antes. 
     
  }while (*val < 0);
}

int quadrado (int num) // Módulo que calcula o quadrado de um número
{
   return num * num;
}
