#include <stdio.h>
#include <stdbool.h>

bool primo(int num, int divisor) {
    if (divisor <= 1) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    return primo(num, divisor - 1);
}

void calcPrimos(int num) {
    if (num < 2) {
        return;
    }

    calcPrimos(num - 1);

    if (primo(num, num - 1)) {
        printf("%d ", num);
    }
}

int main() {
    int limite;

    printf("Informe um numero limite: ");
    scanf("%d", &limite);

    printf("Numeros primos ate %d: ", limite);
    calcPrimos(limite);
    printf("\n");

    return 0;
}
