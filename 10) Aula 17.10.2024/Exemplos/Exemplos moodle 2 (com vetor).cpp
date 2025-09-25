//Exemplo : Utilizacao de Struct e vetores com funções e passagem de parametros

//Ex. Cadastro e impressão do nome, cargo, endereço, cep e salário de dois funcionários.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct funcionario
{
char nome[40];
char cargo[20];
char endereco[30];
char cep[10];
float salario;
};

// área de prototipação das funções

void leitura(funcionario func[MAX], int n);
void escrita(funcionario func[MAX], int n ); // ou (funcionario *)
void mediafun(funcionario func[MAX], int n);

//MODULO PARA LEITURA DA STRUCT
void leitura(funcionario func[MAX], int n)
{
int i,j;
printf("\n***** Cadastro de funcionarios *******\n ");
for (j=0;j<n;j++)
{
printf(" Dados do Funcionario %d ",j+1);
printf(" \nNome ......: ");
fflush(stdin); // limpeza de buffer (stream), onde stdin [e o stream a ser limpo, o teclado
gets(func[j].nome);
fflush(stdin);
printf("Cargo .....: ");
gets(func[j].cargo);
printf("Endereco...: ");
gets(func[j].endereco);
printf("CEP........: ");
gets(func[j].cep);
printf("Salario....: ");
scanf("%f",&func[j].salario);
}

}
// impressao da estrutura func[] ou *func
void escrita(funcionario func[MAX], int n)
{
int j;
printf(" RELACAO DOS FUNCIONARIOS ");
for (j=0;j<n;j++)
{
printf(" DADOS DO FUNCIONARIO %d\n ",j+1);
printf(" \nNome ...: %s ",func[j].nome);
printf(" Cargo ..: %s ",func[j].cargo);
printf(" Endereco: %s ",func[j].endereco);
printf(" CEP.....: %s ",func[j].cep);
printf(" Salario.: %.2f ",func[j].salario);
}
}

// Calcula a media de salaraios dos funcionarios
void mediafun(funcionario func[MAX], int n)
{
int j;
float total=0,m;

for (j=0;j<n;j++)
{
total=total+func[j].salario;

}
m=total/n;
printf(" Media salarios = %.2f ",m);
}
// Corpo PRINCIPAL do programa

main(void)
{ funcionario f[MAX];
int num;
printf(" Informe o numero de aluno que deseja cadastrar: ");
scanf("%d",&num);
leitura(f,num);//chamao modulo de leitura da estrutura
escrita(f,num);//chama o modulo de impressão da estrutura
mediafun(f,num); //chama o modulo de calculo da media de salarios
printf(" ");
system("pause");

}
