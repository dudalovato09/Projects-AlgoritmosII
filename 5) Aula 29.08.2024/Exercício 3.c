#include <stdio.h>
/**/
void lerVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void divisores(int vet1[], int vet2[], int tamanho1, int tamanho2) {
    for (int i = 0; i < tamanho1; i++) {
        int possuiDivisores = 0;
        printf("\nValor %d\n", vet1[i]);
        for (int j = 0; j < tamanho2; j++) {
            if (vet1[i] % vet2[j] == 0) {
                printf("Divisivel por %d na posicao %d\n", vet2[j], j);
                possuiDivisores = 1;
            }
        }
        if (!possuiDivisores) {
            printf("Nao possui divisores no segundo vetor\n");
        }
    }
}

int main() {
    int vet1[8];
    int vet2[3];

    printf("Digite os numeros do vetor Vet1 (8 numeros):\n");
    lerVetor(vet1, 8);

    printf("Digite os numeros do vetor Vet2 (3 numeros):\n");
    lerVetor(vet2, 3);

    divisores(vet1, vet2, 8, 3);

    return 0;
}
