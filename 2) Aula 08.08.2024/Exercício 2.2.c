#include <stdio.h>

int main() {

    int sorteados[10], frequencia[6] = { 0 };

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite o numero sorteado na jogada %d: ", i + 1);
            scanf("%d", &sorteados[i]);
        } while (sorteados[i] < 1 || sorteados[i] > 6);
    }

    for (int i = 0; i < 10; i++) {
        frequencia[sorteados[i] - 1]++;
    }

    printf("\nFrequencia das jogadas do dados: \n");
    for (int i = 0; i < 6; i++) {
        printf("Numero de vezes que o digito %d caiu: %d\n", i + 1, frequencia[i]);
    }


    return 0;
}
