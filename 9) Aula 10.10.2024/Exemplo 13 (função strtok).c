//EXEMPLO STRTOK()

#include <stdio.h>
#include <string.h>

int main(){
  char fonte[] = "Programa de.Ensino e#Tutoria-BCC-UFSCar";
  char delimitadores[] = "-,.#";
    
  printf("String 'fonte':\n%s\n\n", fonte);
  printf("String 'delimitadores':\n%s\n\n", delimitadores);
    
  char * resultado = strtok(fonte, delimitadores);    //Primeira chamada
    
  while(resultado != NULL){
    printf("%s\n", resultado);
    /* Segunda chamada, função utiliza fonte anterior
    e parte do ponteiro final adicionado anteriormente */
    resultado = strtok(NULL, delimitadores);
  }
    
  return 0;
}          

