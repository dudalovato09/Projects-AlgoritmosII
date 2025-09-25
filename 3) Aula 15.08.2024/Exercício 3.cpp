/* Desenvolver um programa para ler dois números e chamar uma função que recebe estes números por  parâmetro e 
retorna a potência do 1º número elevado ao 2º número. Mostrar o retorno da função no programa principal. 
Por exemplo, se forem informados os valores 2 e 3 a função deverá retornar o valor 8.*/

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

    printf("%d elevado a %d é: %d\n", n1, n2, resultado);

    return 0;
}
