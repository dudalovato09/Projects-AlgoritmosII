/* Elabore uma sub-rotina/M�dulo que receba um valor inteiro e verifica se ele � positivo ou negativo e retorna 1 
se ele � positivo e 0(zero) se ele for negativo. Imprima no main a frase "Valor � positivo" ou "Valor � negativo". 
Desenvolva de 2 formas - uma com return e outra com passagem por Refer�ncia. Verifica��o com Passagem por referencia*/

#include <stdio.h>

void numeroPositivo(int valor, int* resultado) {
    if (valor > 0) {
        *resultado = 1;
    }
    else {
        *resultado = 0;
    }
}

int main() {
    int numero, resultado;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    numeroPositivo(numero, &resultado);
    if (resultado) {
        printf("Valor eh positivo.\n");
    }
    else {
        printf("Valor eh negativo ou zero.\n");
    }
    return 0;
}
