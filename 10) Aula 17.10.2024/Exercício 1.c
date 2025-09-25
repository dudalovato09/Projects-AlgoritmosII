/* Crie um programa onde a struct armazene os dados de 5 alunos: nome, idade, sexo, matricula, cidade, curso. 
Os dados devem ser lidos e após impressos. O programa deve utilizar 3 módulos: leitura, impressão e o módulo 
para encontra o mais velho e mais novo. Encontre: o nome do mais velho e o nome do mais novo, 
imprima estes resultados na função criada.*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5

typedef struct {
    char nome[50];
    int idade;
    char sexo;
    int matricula;
    char cidade[50];
    char curso[50];
} Aluno;

void entradaDados(Aluno alunos[], int totalAlunos);
void imprimir(Aluno alunos[], int totalAlunos);
void MaisVelhoMaisNovo(Aluno alunos[], int totalAlunos);

int main() {
    Aluno alunos[MAX_ALUNOS];

    entradaDados(alunos, MAX_ALUNOS);
    imprimir(alunos, MAX_ALUNOS);
    MaisVelhoMaisNovo(alunos, MAX_ALUNOS);

    return 0;
}

void entradaDados(Aluno alunos[], int totalAlunos) {
    for (int i = 0; i < totalAlunos; i++) {
        printf("Digite os dados do aluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Cidade: ");
        scanf(" %[^\n]", alunos[i].cidade);

        printf("Curso: ");
        scanf(" %[^\n]", alunos[i].curso);

        printf("\n");
    }
}

void imprimir(Aluno alunos[], int totalAlunos) {
    printf("Dados dos alunos cadastrados:\n");
    for (int i = 0; i < totalAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Sexo: %c\n", alunos[i].sexo);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Cidade: %s\n", alunos[i].cidade);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
}

void MaisVelhoMaisNovo(Aluno alunos[], int totalAlunos) {
    int indiceMaisVelho = 0;
    int indiceMaisNovo = 0;

    for (int i = 1; i < totalAlunos; i++) {
        if (alunos[i].idade > alunos[indiceMaisVelho].idade) {
            indiceMaisVelho = i;
        }
        if (alunos[i].idade < alunos[indiceMaisNovo].idade) {
            indiceMaisNovo = i;
        }
    }

    printf("Aluno mais velho: %s (Idade: %d)\n", alunos[indiceMaisVelho].nome, alunos[indiceMaisVelho].idade);
    printf("Aluno mais novo: %s (Idade: %d)\n", alunos[indiceMaisNovo].nome, alunos[indiceMaisNovo].idade);
}
