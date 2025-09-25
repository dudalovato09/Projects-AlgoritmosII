/* 5- Elabore uma sub-rotina/M�dulo que receba um valor N como par�metro (deve ser inteiro e maior que 1) e 
determine o valor da sequ�ncia S, descrita a seguir. Imprima no main o valor calculo do S. Desenvolva de 2 
formas - uma com return e outra com passagem por Refer�ncia.

S= 1 + 1/2  +  1/3  + 1/4 ...... 1/N

Calculo de S com Passagem por referencia*/

#include <stdio.h>

void calcularS(int N, double* S) {
    *S = 0.0;
    for (int i = 1; i <= N; i++) {
        *S += 1.0 / i;
    }
}

int main() {
    int N;
    double resultado;
    do {
        printf("Digite um valor inteiro maior que 1: ");
        scanf("%d", &N);
    } while (N <= 1);
    calcularS(N, &resultado);
    printf("O valor da sequencia S eh: %.6lf\n", resultado);
    return 0;
}
