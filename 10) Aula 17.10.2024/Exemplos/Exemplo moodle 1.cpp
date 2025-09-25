#include <stdio.h>
#include <stdlib.h>
// codigo, nome, idade, salario. para 5 funcion?rios
typedef struct 
     {  
         int codigo;
         char nome[50];
         int idade;
         float salario;
         
     } FUNCIONARIO;

//area de prototipa??o
void leitura(FUNCIONARIO f[5]);
void imprimir(FUNCIONARIO f[5]); 
float  calcula_media(FUNCIONARIO f[5]);



void leitura(FUNCIONARIO f[5])
{
   int j;
   printf("\n\nCadastro de funcionarios da empresa\n");
   for (j=0;j<5;j++)//la?o para o numero de alunos
   {
   		printf("\n Funcionario : %d ", j+1);
		printf("\n Digite o codigo:");
     	scanf("%d", &f[j].codigo);
     	printf("\n Digite o nome:");
     	fflush(stdin);
     	gets(f[j].nome);
     	printf("\n Digite a idade:");
     	scanf("%d", &f[j].idade);
     	printf("\n Digite o salario:");
     	scanf("%f", &f[j].salario);
     	
   }
}
void imprimir(FUNCIONARIO f[5])
{
   int j;
   printf("\n\nRELATORIO DOS FUNICONARIOS CADASTRADOS da empresa\n");
   for (j=0;j<5;j++)//la?o para o numero dos funcionario
   {
   		printf("\n Funcionario : %d ", j+1);
		printf("\n Codigo: %d", f[j].codigo);
     	printf("\n Nome: %s", f[j].nome);
     	printf("\n Idade: %d", f[j].idade);
     	printf("\n Salario: %.2f", f[j].salario);
     	
   }
}

float  calcula_media(FUNCIONARIO f[5])
{
   int j;
   float total=0, me;
   for (j=0;j<5;j++)//la?o para o numero dos funcionario
   {
   	
     	total = total + f[j].salario;
     	
   }
   me = total /5;
   return me;
}

//corpo do programa principal
main(void)
{              
    FUNCIONARIO fun[5];
    float media_salario;
	leitura(fun) ;
	imprimir(fun);
    media_salario = calcula_media(fun);
    printf("\n Media dos salarios : %.2f", media_salario);
    system("pause");
    
}

