#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define tamanho 50

main(){
 char nome[tamanho], primeironome[tamanho];
 int repete=1;
 char *resultado; 

 while(repete)
 {
 printf("\n Digite o nome completo: ");
 gets(nome);
 if (strcmp(strupr(nome),"FIM")!=0)
    {

     
     if (strstr(nome," "))
     {
         resultado = strstr(nome," "); 
         strncpy(primeironome, nome, (strlen(nome) - strlen(resultado)));
         primeironome[(strlen(nome) - strlen(resultado))]='\0';         
     }
     else
         strcpy(primeironome, nome);
     printf("\n O primeiro nome eh %s", primeironome);
    }
 else
     repete = 0;
 };//fim do while
 
 printf("\n\n");
 system("pause");     
       
}
