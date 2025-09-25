/* Struct */

#include <stdio.h>
#include <stdlib.h>

//Defini��o da struct
typedef struct {
	char nome[40];
	float nota1;
	float nota2;
	float media;
} NOTAS_ALUNOS;

//Prototipa��o
void leitura(NOTAS_ALUNOS al[]);
void impressao(NOTAS_ALUNOS al[]);
int calculo(NOTAS_ALUNOS al[]);

int main (void)
{
	int contador;
 	NOTAS_ALUNOS aluno[3]; //declara��o das vari�veis do tipo NOTAS_ALUNOS o [3] permite que seja armazenado 3 informa��es de cada vari�vel, caso contr�rio daria para cadastrar apenas 1 pessoa
	
 	leitura(aluno); // Chama o m�ludo leitura, leva a vari�vel e identifica apenas aonde essa estrtura come�a, passagem por ref sem &
 	impressao(aluno);
 	contador = calculo(aluno);

	printf("Total de alunos com media >= 7.0: %d\n", contador);
	
 	system("pause");
 	return 0;
}

void leitura(NOTAS_ALUNOS al[]){ //M�dulo de leitura
 	
	 	int j;
	 	
	 	printf("\nCadastro de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//la�o para n�mero de alunos
	 	{
	 		printf("\nAluno %d", j+1);
	 		printf("\nNome: ");
	 		fflush(stdin);
	 		gets(al[j].nome);
	 		
	 		printf("Nota 1: ");
	 		scanf("%f", &al[j].nota1);
	 		
	 		printf("Nota 2: ");
	 		scanf("%f", &al[j].nota2);
	 		
	 		al[j].media = (al[j].nota1 + al[j].nota2)/2;;
	 		printf("Media: %.2f\n", al[j].media);
		}
		 
}

void impressao(NOTAS_ALUNOS al[]){ //M�dulo de impress�o
 	
	 	int j;
	 	
	 	printf("\n\nRelatorio de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//la�o para n�mero de alunos
	 	{
	 		printf("\nAluno %d", j+1);
	 		printf("\nNome: %s", al[j].nome);
	 		printf("\nNota 1: %.2f", al[j].nota1);
	 		printf("\nNota 2: %.2f", al[j].nota2);
	 		printf("\nMedia: %.2f\n", al[j].media);
		}
		 
}

int calculo(NOTAS_ALUNOS al[]){ //M�dulo que identifica quantos alunos tiveram a m�dia maior ou igual a 7
 	
	 	int j, conta_maior = 0;
	 	
	 	printf("\n\nRelatorio de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//la�o para n�mero de alunos
	 	{
	 		if(al[j].media >= 7){
	 			conta_maior++;
			 }
		}
		 
	return conta_maior;
}


