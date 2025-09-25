/* Este programa:

- Lê o código geral do aluno
- Lê o nome do aluno
- Lê nota 1 e nota 2
- Cálcula e imprime na tela a média individual deste aluno

Faz este processo com 3 alunos no total 

- Após isso peega as infromações das notas de todos os alunos e faz a média geral da turma*/

#include<stdio.h>
#include<conio.h>

typedef struct
{
	int codigo;
	char nome[30];
	char endereco[40];
	float nota1;
	float nota2;
	float media;	
} CADASTRO_ALUNO;

// área de prototipacao
void leituraaluno(CADASTRO_ALUNO al[3] );
void imprimiraluno(CADASTRO_ALUNO al[3] );
void calculoconta(CADASTRO_ALUNO al[3],int *q1,int *q2 );
float calculomedia(CADASTRO_ALUNO al[3] );

//-----------------------------------------------


main(void)
{
	CADASTRO_ALUNO aluno[3];
	float m;
	int qtd1=0, qtd2=0;
	
	leituraaluno(aluno);
	imprimiraluno(aluno);
	m=calculomedia(aluno);
	
	printf("\n------ RELATORIO GERAL DAS MEDIAS ------\n");
	printf("\nMedia geral da turam = %.2f",m);
	
	calculoconta(aluno,&qtd1,&qtd2);

	printf("\nTotal de aluno com media >= 7 : %i", qtd1);
	printf("\nTotal de aluno com media <  7 : %i", qtd2);
}

void calculoconta(CADASTRO_ALUNO al[3],int *q1,int *q2 )
{
	
	int i;
	
	for(i=0;i<3;i++)
	{
	    if ( al[i].media>=7)
	    {
	    	*q1=*q1+1;	
	    }
	    else
	    {
	    	*q2=*q2+1;	
	    }   
	}	
}

float calculomedia(CADASTRO_ALUNO al[3] )
{
	int i;
	float soma=0;

	for(i=0;i<3;i++)
	{
		soma=soma+al[i].media;
	}
	
	return (soma/3);
}

void leituraaluno(CADASTRO_ALUNO al[3] )
{
	int i;
	printf("\n------ RELATORIO GERAL DOS ALUNOS ------\n");
	for(i=0;i<3;i++)
	{
		printf("\nRELATORIO DO ALUNO %i\n",i+1);
		printf("\nCodigo: ");
		scanf("%i",&al[i].codigo);
		printf("Nome: ");
		fflush(stdin);
		gets(al[i].nome);
		printf("Endereco: ");
		fflush(stdin);
		gets(al[i].endereco);
		printf("Nota 1: ");
		scanf("%f",&al[i].nota1);
		printf("Nota 2: ");
		scanf("%f",&al[i].nota2);
		al[i].media=(al[i].nota1+al[i].nota2)/2;
		printf("Media  do aluno = %.2f \n\n", al[i].media);
	}
	
	 
}

void imprimiraluno(CADASTRO_ALUNO al[3] )
{
	int i;
	
	printf("\n\n------ CADASTRO DOS ALUNOS ------\n\n");
	
	for(i=0;i<3;i++)
	{
		printf("\nCADASTRO DO ALUNO %i\n",i+1);
		printf("\nCodigo: %i",al[i].codigo );
		printf("\nNome: %s",al[i].nome);
		printf("\nEndereco: %s",al[i].endereco);
		printf("\nNota 1: %.2f",al[i].nota1);
		printf("\nNota 2: %.2f",al[i].nota2);
		printf("\nMedia: %.2f\n", al[i].media);	
	}
	
}
