/* Elabore uma sub-rotina/Módulo que receba um valor inteiro e verifica se ele é positivo ou negativo e retorna 1 
se ele é positivo e 0(zero) se ele for negativo. Imprima no main a frase "Valor é positivo" ou "Valor é negativo". 
Desenvolva de 2 formas - uma com return e outra com passagem por Referência. Verificação com Passagem por referencia*/

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
