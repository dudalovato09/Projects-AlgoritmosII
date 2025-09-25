//EXEMPLO STRRCHR()

#include <stdio.h>
#include <string.h>

int main(){
  int caractere = 'a';
  char fonte[] = "Programa de Ensino e Tutoria - BCC";

  printf("Localizar a última letra '%c' na frase: %s\n", caractere, fonte);
  if(strchr(fonte, caractere) != NULL){
    printf("\nCaractere %c encontrado!\n", caractere);
  printf("String a partir dele: %s\n", strrchr(fonte, caractere));
  } else {
    printf("\nCaractere %c não encontrado!\n", caractere);
  }

  return 0;	
}
