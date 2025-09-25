// Cadastro e impressão de nomes em arquivo texto

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

FILE *ARQ;

//---------------------------------

void criar();
void cadastrar();
char menu();

//===========================================

char menu()
{ 
	printf(" \n1 - Criar");
	printf(" \n2 - Cadastrar");
	printf(" \n3 - Relatorio");
	printf(" \n4 - Sair");
	printf("\nEntre com a opcao : ");
	  
	return (getche());
} 
 
//============================================

void criar()
{
	system("cls");
	
	printf("\nCriacao do arquivo\n");
	ARQ=fopen("nomes.txt","w");  
	
	printf("\n========= Arquivo foi criado ========= \n");
	
	system("pause");
	fclose(ARQ);  
 
}

//==============================================

void cadastrar()
{

	char nome[41],op;
	system("cls");
	
	printf("\nCadastrar registros\n");
	ARQ=fopen("nomes.txt","a");  
	op='S';
	
	while (op =='S' )
	{
		printf("\nNome = ");
		fgets(nome,41,stdin);
		fputs(nome,ARQ);
		
		printf(" \nContinuar s/n ?");
		op=toupper(getche());
	 }
	 
	 fclose(ARQ);  
}
 //================================================
void relatorio()
{
	char nome[41];
	system("cls");
	
	printf("\n=========Relatorio de Registros======\n");
	ARQ=fopen("nomes.txt","r");
	
	if (ARQ == NULL)
	{  
		printf ("\nerro ao abrir o arquivo ");
		return;
	}  
	
	printf("\n____________________________________________________\n");
	
	while (fgets(nome,41,ARQ)!=NULL)
	{
		printf("%s",nome);
	}
	
	printf("\n____________________________________________________\n");
	 
	printf("\n\n\n\n\n");
	
	system("pause");
	fclose(ARQ);  
	 
	}
//=================================================

main(void)
{ 
	char op;
	
	while(1)
	{
		system("cls");
		op=menu();
		switch(op)
		{
			case '1': criar(); break;
			case '2': cadastrar();break;
			case '3': relatorio();break;
			case '4': exit(0);
		}
	 
	}
	system("pause");
}

//=============== fim ====================
