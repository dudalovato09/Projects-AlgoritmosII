#include <stdio.h>
#include <math.h>  

int potenciaComRetorno(int A, int B) {
    return pow(B, A);  // Calcula B elevado a A
}

void potenciaComReferencia(int A, int B, int *resultado) {
    *resultado = pow(B, A);  // Calcula B elevado a A e armazena no endereço de resultado
}

int main() {
    int A, B;

    // Leitura dos valores A e B
    printf("Digite o valor de A (expoente): ");
    scanf("%d", &A);
    printf("Digite o valor de B (base): ");
    scanf("%d", &B);

    
    int resultadoRetorno = potenciaComRetorno(A, B);
    printf("Resultado utilizando passagem por valor (Return): %d\n", resultadoRetorno);

   
    int resultadoReferencia;
    
    potenciaComReferencia(A, B, &resultadoReferencia);
    
    printf("Resultado utilizando passagem por referência: %d\n", resultadoReferencia);

    return 0;
}

