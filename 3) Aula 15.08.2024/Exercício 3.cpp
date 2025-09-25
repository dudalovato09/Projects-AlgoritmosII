/* Desenvolver um programa para ler dois n�meros e chamar uma fun��o que recebe estes n�meros por  par�metro e 
retorna a pot�ncia do 1� n�mero elevado ao 2� n�mero. Mostrar o retorno da fun��o no programa principal. 
Por exemplo, se forem informados os valores 2 e 3 a fun��o dever� retornar o valor 8.*/

#include <stdio.h>
#include <locale.h>


int potencia(int n1, int n2) {
    int resultado = 1;
    for (int i = 0; i < n2; i++) {
        resultado *= n1;
    }
    return resultado;
}

int main() {
    int n1, n2;

    printf("Digite a base: ");
    scanf("%d", &n1);
    printf("Digite o expoente: ");
    scanf("%d", &n2);

    int resultado = potencia(n1, n2);

    printf("%d elevado a %d �: %d\n", n1, n2, resultado);

    return 0;
}
