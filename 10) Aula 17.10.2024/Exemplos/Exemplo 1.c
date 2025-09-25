/* Struct */

#include <stdio.h>
#include <stdlib.h>

//Definição da struct
typedef struct {
	char nome[40];
	float nota1;
	float nota2;
	float media;
} NOTAS_ALUNOS;

//Prototipação
void leitura(NOTAS_ALUNOS al[]);
void impressao(NOTAS_ALUNOS al[]);
int calculo(NOTAS_ALUNOS al[]);

int main (void)
{
	int contador;
 	NOTAS_ALUNOS aluno[3]; //declaração das variáveis do tipo NOTAS_ALUNOS o [3] permite que seja armazenado 3 informações de cada variável, caso contrário daria para cadastrar apenas 1 pessoa
	
 	leitura(aluno); // Chama o móludo leitura, leva a variável e identifica apenas aonde essa estrtura começa, passagem por ref sem &
 	impressao(aluno);
 	contador = calculo(aluno);

	printf("Total de alunos com media >= 7.0: %d\n", contador);
	
 	system("pause");
 	return 0;
}

void leitura(NOTAS_ALUNOS al[]){ //Módulo de leitura
 	
	 	int j;
	 	
	 	printf("\nCadastro de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//laço para número de alunos
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

void impressao(NOTAS_ALUNOS al[]){ //Módulo de impressão
 	
	 	int j;
	 	
	 	printf("\n\nRelatorio de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//laço para número de alunos
	 	{
	 		printf("\nAluno %d", j+1);
	 		printf("\nNome: %s", al[j].nome);
	 		printf("\nNota 1: %.2f", al[j].nota1);
	 		printf("\nNota 2: %.2f", al[j].nota2);
	 		printf("\nMedia: %.2f\n", al[j].media);
		}
		 
}

int calculo(NOTAS_ALUNOS al[]){ //Módulo que identifica quantos alunos tiveram a média maior ou igual a 7
 	
	 	int j, conta_maior = 0;
	 	
	 	printf("\n\nRelatorio de alunos\n");
	 	
	 	for(j = 0; j <= 2; j++)//laço para número de alunos
	 	{
	 		if(al[j].media >= 7){
	 			conta_maior++;
			 }
		}
		 
	return conta_maior;
}


