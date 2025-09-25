/* 5- Elabore uma sub-rotina/Módulo que receba um valor N como parâmetro (deve ser inteiro e maior que 1) e 
determine o valor da sequência S, descrita a seguir. Imprima no main o valor calculo do S. Desenvolva de 2 
formas - uma com return e outra com passagem por Referência.

S= 1 + 1/2  +  1/3  + 1/4 ...... 1/N

Calculo de S com Return*/

#include <stdio.h>

double calcularS(int N) {
    double S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    return S;
}

int main() {
    int N;
    do {
        printf("Digite um valor inteiro maior que 1: ");
        scanf("%d", &N);
    } while (N <= 1);
    double resultado = calcularS(N);
    printf("O valor da sequencia S eh: %.6lf\n", resultado);
    return 0;
}
