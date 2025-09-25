//Exercício 2

#include <stdio.h>
#include <string.h>

void criptografar(char *frase) {
    int tamanho = strlen(frase); // Obtém o tamanho da string

    for (int i = 0; i < tamanho; i++) {
        // Verifica se o caractere é uma vogal (maiúscula ou minúscula)
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            frase[i] = '#'; // Substitui a vogal por '#'
        }
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Lê a frase do usuário
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha

    criptografar(frase); // Chama a função para criptografar a frase

    printf("Frase criptografada: %s\n", frase);

    return 0;
}

