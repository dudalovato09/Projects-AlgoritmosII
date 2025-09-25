#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 20

typedef struct {
    int codigoAluno;
    char nomeAluno[50];
    float notaLab;
    float notaAvaliacao;
    float notaFinal;
    float mediaFinal;
    char classificacao[2];
} Aluno;

void entradaDados(Aluno alunos[], int totalAlunos);
void mediaClassificacao(Aluno alunos[], int totalAlunos);
void imprimirAlunos(Aluno alunos[], int totalAlunos);

int main() {
    Aluno alunos[MAX_ALUNOS];
    int n;

    do {
        printf("Digite o numero de alunos a serem cadastrados (max %d): ", MAX_ALUNOS);
        scanf("%d", &n);
        if (n > MAX_ALUNOS || n <= 0) {
            printf("Numero invalido! Insira um valor entre 1 e %d.\n", MAX_ALUNOS);
        }
    } while (n > MAX_ALUNOS || n <= 0);

    entradaDados(alunos, n);
    mediaClassificacao(alunos, n);
    imprimirAlunos(alunos, n);

    return 0;
}

void entradaDados(Aluno alunos[], int totalAlunos) {
    for (int i = 0; i < totalAlunos; i++) {
        printf("\nDigite os dados do aluno %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &alunos[i].codigoAluno);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nomeAluno);

        printf("Nota do trabalho de laboratorio (0 a 10): ");
        scanf("%f", &alunos[i].notaLab);

        printf("Nota da avaliacao semestral (0 a 10): ");
        scanf("%f", &alunos[i].notaAvaliacao);

        printf("Nota da prova final (0 a 10): ");
        scanf("%f", &alunos[i].notaFinal);
    }
}

void mediaClassificacao(Aluno alunos[], int totalAlunos) {
    for (int i = 0; i < totalAlunos; i++) {
        alunos[i].mediaFinal = (alunos[i].notaLab * 2 + alunos[i].notaAvaliacao * 3 + alunos[i].notaFinal * 5) / 10;

        if (alunos[i].mediaFinal >= 8) {
            strcpy(alunos[i].classificacao, "A");
        }
        else if (alunos[i].mediaFinal >= 7) {
            strcpy(alunos[i].classificacao, "B");
        }
        else if (alunos[i].mediaFinal >= 6) {
            strcpy(alunos[i].classificacao, "C");
        }
        else if (alunos[i].mediaFinal >= 5) {
            strcpy(alunos[i].classificacao, "D");
        }
        else {
            strcpy(alunos[i].classificacao, "R");
        }
    }
}

void imprimirAlunos(Aluno alunos[], int totalAlunos) {
    printf("\nLista de alunos cadastrados com suas medias e classificacoes:\n");
    for (int i = 0; i < totalAlunos; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Codigo: %d\n", alunos[i].codigoAluno);
        printf("Nome: %s\n", alunos[i].nomeAluno);
        printf("Media final: %.2f\n", alunos[i].mediaFinal);
        printf("Classificacao: %s\n", alunos[i].classificacao);
    }
}
