//EXEMPLO STRERROR()

#include <math.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
  
int main(){
  printf("log(-1.0) = %f\n", log(-1.0));
  printf("Erro de n�mero %d obtido!\n", errno);
  printf("Descri��o do erro: %s\n\n", strerror(errno));
  
  printf("log(0.0) = %f\n", log(0.0));
  printf("Erro de n�mero %d obtido!\n", errno);
  printf("Descri��o do erro: %s", strerror(errno));
  
  return 0;
}
