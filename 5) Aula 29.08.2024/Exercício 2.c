#include <stdio.h>
#include <string.h>
/**/
void lerGabarito(char gabarito[]) {
    printf("Digite o gabarito da prova (10 questoes):\n");
    for (int i = 0; i < 10; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }
}

void lerRespostas(char respostas[]) {
    printf("Digite as respostas do aluno (10 questoes):\n");
    for (int i = 0; i < 10; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &respostas[i]);
    }
}

void calcular(char gabarito[], char respostas[], char nome[], int matricula, int* acertos, float* nota) {
    *acertos = 0;
    for (int i = 0; i < 10; i++) {
        if (respostas[i] == gabarito[i]) {
            (*acertos)++;
        }
    }
    *nota = *acertos;
    printf("\nMatricula: %d\n", matricula);
    printf("Nome: %s\n", nome);
    printf("Nota: %.1f\n", *nota);
}

int main() {
    int N;
    char gabarito[10];
    char respostas[10];
    char nome[50];
    int matricula;
    int acertos;
    float nota;
    int aprovados = 0;

    do {
        printf("Digite o numero de alunos (1 a 50): ");
        scanf("%d", &N);
    } while (N < 1 || N > 50);

    lerGabarito(gabarito);

    for (int i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Digite o nome do aluno: ");
        scanf("%s", nome);
        printf("Digite o codigo de matricula do aluno: ");
        scanf("%d", &matricula);

        lerRespostas(respostas);

        calcular(gabarito, respostas, nome, matricula, &acertos, &nota);

        if (nota >= 7.0) {
            aprovados++;
        }
    }

    float percentualAprovacao = (float)aprovados / N * 100;
    float percentualReprovacao = 100 - percentualAprovacao;
    printf("\nPercentual de aprovacao: %.2f%%\n", percentualAprovacao);
    printf("Percentual de reprovacao: %.2f%%\n", percentualReprovacao);

    return 0;
}
