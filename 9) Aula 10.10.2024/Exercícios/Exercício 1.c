//Exercício 2

#include <stdio.h>
#include <string.h>

int main(){
  
  char fonte[] = "Amo -a -tecnologia";
  char delimitadores[] = "-,.#";
    
  char * resultado = strtok(fonte, delimitadores);   
    
  while(resultado != NULL){
    printf("%s\n", resultado);
    resultado = strtok(NULL, delimitadores);
  }
    
  return 0;
}          
