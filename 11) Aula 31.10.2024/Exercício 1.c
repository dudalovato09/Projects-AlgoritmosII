#include <stdio.h>

int pares(int inicio, int fim) {
    if (inicio > fim) {
        return 0;
    }

    if (inicio % 2 == 0) {
        return 1 + pares(inicio + 1, fim);
    }
    else {
        return pares(inicio + 1, fim);
    }
}

int main() {
    int inicio, fim;

    printf("Informe o primeiro numero: ");
    scanf("%d", &inicio);
    printf("Informe o segundo numero: ");
    scanf("%d", &fim);

    int numerdePares = pares(inicio, fim);
    printf("Quantidade de numeros pares entre %d e %d: %d\n", inicio, fim, numerdePares);

    return 0;
}
