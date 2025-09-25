#include <stdio.h>
/**/

void lerVetor(float vetor[]) {
    for (int i = 0; i < 5; i++) {
        printf("Digite o salario %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

float calcMedia(float vetor[]) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    return soma / 5;
}

float maiores(float vetor[]) {
    float maior = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

float menores(float vetor[]) {
    float menor = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

void impVetorInvertido(float vetor[]) {
    for (int i = 5 - 1; i >= 0; i--) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void menu() {
    float vetor[5];
    int vetorLido = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Ler o vetor A de 5 posicoes com salarios\n");
        printf("2 - Media de todos elementos\n");
        printf("3 - Maior elemento\n");
        printf("4 - Menor elemento\n");
        printf("5 - Impressao do Vetor em ordem inversa\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            lerVetor(vetor);
            vetorLido = 1;
            break;
        case 2:
            if (vetorLido) {
                printf("Media dos elementos: %.2f\n", calcMedia(vetor));
            }
            else {
                printf("O vetor nao foi lido\n");
            }
            break;
        case 3:
            if (vetorLido) {
                printf("Maior elemento: %.2f\n", maiores(vetor));
            }
            else {
                printf("O vetor nao foi lido\n");
            }
            break;
        case 4:
            if (vetorLido) {
                printf("Menor elemento: %.2f\n", menores(vetor));
            }
            else {
                printf("O vetor nao foi lido\n");
            }
            break;
        case 5:
            if (vetorLido) {
                printf("Vetor em ordem inversa: ");
                impVetorInvertido(vetor);
            }
            else {
                printf("O vetor nao foi lido\n");
            }
            break;
        case 6:
            printf("Finalizando aplicacao\n");
            break;
        default:
            printf("Opcao invalida, redigite\n");
        }
    } while (opcao != 6);
}

int main() {
    menu();
    return 0;
}
