#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main(){
 char nome1[50], nome2[50], *resultado, diferenca[50]="";

 printf("\n Digite um texto: ");
 gets(nome1);
 printf("\n tamanho primeiro: %d\n", strlen(nome1));
 printf("\n Digite uma palavra a procurar: ");
 gets(nome2);
 printf("\n tamanho segundo: %d\n", strlen(nome2));
  
 resultado = strstr(nome1, nome2);
 if (strstr(nome1,nome2))
 {
    printf("\n voltou: %s", resultado);
    printf("\n tamanho resultado: %d", strlen(resultado)); 
    strncpy(diferenca, nome1, (strlen(nome1) - strlen(resultado)));
    printf("\n Parte = %s / tamanho= %d", diferenca, strlen(diferenca));    
 }
 else
    printf("\n nao encontrou!");
 

 printf("\n\n");
 system("pause");     
       
}
