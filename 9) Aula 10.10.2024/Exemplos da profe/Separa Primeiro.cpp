#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define tamanho 50

void encontraprimeiro(char nome[tamanho], char primeiro[tamanho])
{
     char *resultado;
     
     if (strstr(nome," "))
     {
         resultado = strstr(nome," "); 
         strncpy(primeiro, nome, (strlen(nome) - strlen(resultado)));
         primeiro[(strlen(nome) - strlen(resultado))]='\0';         
     }
     else
         strcpy(primeiro, nome);
}

main(){
 char nome[tamanho], primeironome[tamanho];
 int repete=1;
 

 while(repete)
 {
 printf("\n Digite o nome completo: ");
 gets(nome);
 if (strcmp(strupr(nome),"FIM")!=0)
    {
     encontraprimeiro(nome, primeironome);
     printf("\n O primeiro nome eh %s", primeironome);
    }
 else
     repete = 0;
 };//fim do while
 
 printf("\n\n");
 system("pause");     
       
}
