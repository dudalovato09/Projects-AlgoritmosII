/* Problemas para análise utilizando estruct, modularização e pesquisa de dados em struct.
DEVE UTILIZAR MODULARIZAÇÃO.

Uma empresa do ramo de material esportivo deseja ter o controle automatizado dos funcionários que trabalham  
em cada uma de suas filiais. Sabe-se que essa empresa possui quatro filiais com quatro vendedores e um 
gerente e cada uma delas. Todos devem ser cadastrados como funcionários.

Faça um programa que realize esse controle, com as seguintes rotinas:

	a) Cadastrar filial, observando que não podem existir duas filiais com o mesmo número.
	
	b) Cadastrar funcionário, observando que: 
		1) não podem existir dois funcionários com o mesmo número; 
		2) cada funcionário deve ser cadastrado em uma filial ; 
		3) cada filial pode ter apenas um gerente e no máximo quatro vendedores.
	
	c) Criar uma consulta a todas as filiais, mostrando o nome do gerente e dos vendedores, 
	o valor  total gasto com pagamentos de salários por filial e o valor gasto com pagamento de salário geral.
	
Structs necessárias
	
	* Filial  ( Numero_filial, Nome_Filial)
	
	* Funcionário (Numero_filial, Codigo_Funcionario, Nome_Funcionario, Cargo, Salario)

Mensagens que o programa deve gerar:

	- Cadastro de filiais lotado – quando ultrapassar o limite de 4 filiais
	
	- Já existe filial cadastrada com este número – quando tentar cadastrar uma filial que o número já está cadastrado
	
	- Cadastro de funcionários lotado – quando ultrapassar o limite de 5 funcionários por filial
	
	- Já existe funcionário cadastrado com este código – se tentar cadastrar um funcionário com número que já está cadastrado
	
	- Esta filial não esta cadastrada – quando tentar cadastrar m funcionário em um filial que não existe/não foi cadastrada
	
	- Esta filial já está com todos os funcionários – quando todos os 5 funcionários já foram cadastrados ( 1 gerente e 4 vendedores)
	
	- Filial já possui gerente – quando tentar lançar mais de um gerente na mesma filial
	
	- Filial já tem 4 vendedores – quando tentar cadastrar mais do que 4 vendedores na mesma filial
	
	- Cadastro de filiais vazio – quanto tentar imprimir o relatório e não tem nenhuma filial cadastrada
	
	- Cadastro de funcionários vazio – quanto tentar imprimir  relatório de funcionários e não tem nenhum cadastrado.

 Crie um MENU com as seguintes opções

	MENU DE OPÇÕES
	
	1- Cadastrar Filial
	
	2- Cadastrar Funcionário
	
	3 - Consultar filiais
	
	4- Consulta funcionarios
	
	5 - Sair

CADA OPÇÃO DO MENU DEVE SER EM OUTRO MÓDULO */


#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//definição da struct
typedef struct {
   char nome_filial[30];
   int numero_filial;
} FILIAL;

typedef struct {
   char nome_funcionario[30];
   int numero_filial;
   int codigo_funcionario;
   int cargo;
   float salario;
} FUNCIONARIO;

//área de prototipação-------------------------------------------
int cadastrofilial(int n, FILIAL f[4]);
int cadastrofuncionario(int n, FUNCIONARIO f[20], FILIAL fil[4]);
int menu();
int verifica_funcionario(FUNCIONARIO f[20], int n);
int verifica_gerente(FUNCIONARIO f[20], int n);
void consultafuncionario(int n, FUNCIONARIO f[20]);
void consultafilial(int n, FILIAL f[4]);

//--------------------------------------------------------------

//módulo verificar funcionario
int verifica_funcionario(FUNCIONARIO f[20], int n)
{
	int i,conta=0,soma=0, filial;
	filial= f[n].numero_filial;
	for(i=0; i<n ; i++)
	{
		if(f[n].cargo==2 && f[i].numero_filial==filial)
		{
			soma++;
		}	
	}
	
	return soma;
}

//módulo verificar gerente
int verifica_gerente(FUNCIONARIO f[20], int n)
{
	int i,conta=0, filial;
	filial=f[n].numero_filial;
	for(i=0; i<n ; i++)
	{
		if(f[i].cargo==1 && f[i].numero_filial==filial)
		{
			conta=1;
			
		}	
	}
	return conta;
}

//módulo mostra relatorio funcionario
void consultafuncionario(int n, FUNCIONARIO f[20])
{
	int i;
	if (n==0) 
	{
		printf("\n\nN?o possui funcinarios cadastrdos");
	}else
	{
		
	
    for(i=0; i<n ; i++)
  	{
	
	   printf("\n\nRelatorio de Funcionarios %i ",i+1);
	   printf("\nCodigo do funcionario: %i ",f[i].codigo_funcionario);
	   printf("\nNome: %s ",f[i].nome_funcionario);
	   printf("\nFun??o: ");
	   if(f[i].cargo==1)
	   {
			printf(" Gerente");
	   }else
	   {
	   	if(f[i].cargo==2)
	   	{
			printf(" Vendedor");
	   	}
	   } 
	   printf("\nFilial: %i ",f[i].numero_filial);
	   printf("\nSalario: R$ %.2f ",f[i].salario);	   	
	}
	}
}

//módulo relatorio de filial
void consultafilial(int n, FILIAL f[4])
{
	int i;
	printf("\n\nRelatorio das Filiais.");
	if (n==0) 
	{
		printf("\n\nN?o possui filial cadastrada");
	}else
	{
	for(i=0; i<n ; i++)
	{
	  
	   printf("\n\n\nCodigo da filial: %i ",f[i].numero_filial);
	   printf("\nNome da filial: %s ",f[i].nome_filial);
	     	
	}
	}
}

//módulo de cadastro funcionarios
int cadastrofuncionario(int n, FUNCIONARIO f[20], FILIAL fil[4])
{
	int j,check=0, sim=0, sim3=0, sim2=0, contagerente=0, entra=0, contavendedor=0, cod_fil, certo=0, sim4=0 ;
	printf ("\n\n\t\t******CADASTRO FUNCIONARIO******\n\n");
	printf ("\n\nCADASTRO DO FUNCIONARIO %i \n\n", n+1);

		printf ("\nInforme o Codigo do Funcionario: ");
		scanf ("%i", &f[n].codigo_funcionario);
		
		//for para verificar se existem codigos de funcionarios iguais
		for(j=0; j<n; j++)
		{
			if(f[n].codigo_funcionario==f[j].codigo_funcionario)
			{
				check++;		
			}	
		}
		if(check<1)
		{
			printf ("\nInforme o Nome do Funcionario: ");
			fflush(stdin);
			gets (f[n].nome_funcionario);
			
			//do para verificação das filiais
			do
			{
				printf ("\nInforme o Codigo da Filial: ");
				scanf ("%i",&f[n].numero_filial);
				for(j=0; j<=n; j++)
				{
					if(f[n].numero_filial==fil[j].numero_filial)
					{
						certo++;		
					}
				
				}
				
				if(certo==0)
				{
					printf ("\nEssa filial ainda nao foi cadastrada. Tente novamente. ");
					printf ("\n ");	
				}
		    }while(certo==0);
				printf ("\nInforme o Cargo 1-Gerente / 2-Vendedor: ");
				scanf ("%i", &f[n].cargo);
				if(f[n].cargo==1)
				{
				 sim2= verifica_gerente(f,n);	
				}else
				{
					if(f[n].cargo==2)
					{
						sim3=verifica_funcionario(f,n);	
					}	
				}
				sim4=sim3+sim2;
				if(sim2==0 && f[n].cargo==1)
				{
					printf ("\nInforme o Salario. ");
					scanf ("%f", &f[n].salario);
					sim=1;
					return sim;	
				}else
				{	
					if(sim2==1)
					{
						printf("\nFilial ja possui gerente.");
						if(sim4>4)
						{
							printf("\nCadastro de funcionarios lotado.");
							printf("\nEsta filial ja esta com todos os funcionarios.");	
						}
					}
							
				}
				if(sim3<5 && f[n].cargo==2 )
				{
					printf ("\nInforme o Salario. ");
					scanf ("%f", &f[n].salario);
					sim=1;
					return sim;	
				}else
				{ 
				 
				 	if(f[n].cargo==2)
				 	{
				 		printf("\nFilial ja tem 4 vendedores.");
						if(sim4>4)
						{
							printf("\nCadastro de funcionarios lotado.");
							printf("\nEsta filial ja esta com todos os funcionarios.");	
						}		
				 	}
						
				}
		}else
		{
				printf("\nJa existe funcionario cadastrado com este codigo.");	
		}			
   
}

//módulo de cadastro filial
int cadastrofilial(int n, FILIAL f[4])
{
	int j,check=0, sim=0 ;
	printf ("\n\n\t\t******CADASTRO FILIAL******\n\n");
	printf ("\n\nCADASTRO DA FILIAL %i \n\n", n+1);
	if(n<=3)
	{
		printf ("\nInforme o Codigo da Filial: ");
		scanf ("%i", &f[n].numero_filial);
 		for(j=0; j<n; j++)
		{
			if(f[n].numero_filial==f[j].numero_filial)
			{
				check++;		
			}
		}
		if(check<1)
		{	
			printf ("\nInforme o Nome da Filial: ");
			fflush(stdin);
			gets (f[n].nome_filial);
			sim=1;
			return sim;	
		}else
		{
			printf("\nJa existe filial cadastrada com este numero");
		}
			
	}else
	{
		printf ("\nCadastro de filiais lotado. ");	
	}
 	   
}

//Módulo menu
int menu()
{
	int op;
	printf("\n\n\n*******Escolha uma opcao******* ");
	printf("\n\n\n1 - Cadastro Filial. ");
	printf("\n2 - Cadastro Funcionario. ");
	printf("\n3 - Consulta Filial. ");
	printf("\n4 - Consulta Funcionario. ");
	printf("\n5 - Sair  ");
	scanf("%i", &op);
	return op;	
}


//corpo principal do programa
main (void)
{
   FILIAL fil [4]; //declaração das variáveis do tipo FILIAL
   FUNCIONARIO fun[20];//declaração das variáveis do tipo FUNCIONARIO
   int quant, operacao, contfilial=0, contfuncionario=0, ckeck_filial, ckeck_fun;
   
   do
   {
   		operacao=menu();
   		if(operacao==1)
   		{
   			ckeck_filial=cadastrofilial(contfilial, fil);
   			
   			//if para confirmar o cadastro da filial
   			if(ckeck_filial==1)
   			{
   					contfilial++;	
   			}
   		}else
   		{
   			if(operacao==2)
   			{
   				ckeck_fun=cadastrofuncionario(contfuncionario, fun, fil);
   				if(ckeck_fun==1)
   				{
   					contfuncionario++;	
   				}
   				
   			}else
   			{
   				if(operacao==3)
   				{
   					consultafilial(contfilial, fil);
   				}else
   				{
   					if(operacao==4)
   					{
   						consultafuncionario(contfuncionario, fun);
   					}
   				}
   			}
  		 }
   }while(operacao!=5);
   
}
