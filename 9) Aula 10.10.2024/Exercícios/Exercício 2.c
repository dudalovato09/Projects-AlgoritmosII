//Exerc�cio 2

#include <stdio.h>
#include <string.h>

void criptografar(char *frase) {
    int tamanho = strlen(frase); // Obt�m o tamanho da string

    for (int i = 0; i < tamanho; i++) {
        // Verifica se o caractere � uma vogal (mai�scula ou min�scula)
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            frase[i] = '#'; // Substitui a vogal por '#'
        }
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // L� a frase do usu�rio
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha

    criptografar(frase); // Chama a fun��o para criptografar a frase

    printf("Frase criptografada: %s\n", frase);

    return 0;
}

