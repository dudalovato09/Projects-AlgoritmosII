#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void sobrenome(char nome2[50], char diferenca[50])
{
  char *resultado;
  int i,repete = 1;
  while(repete)
 {
    if (strstr(nome2," "))
    {
       resultado = strstr(nome2," "); 
       strncpy(diferenca,nome2,(strlen(nome2)-strlen(resultado)));
       diferenca[(strlen(nome2)-strlen(resultado))]='\0';   
    }   
    else
       if (strcmp(nome2,"")!=0)  
       {                               
          strncpy(diferenca,nome2, strlen(nome2));
          diferenca[strlen(nome2)]='\0';
          repete = 0;
       }
       
    for (i=1;i<strlen(resultado);i++)
           nome2[i-1] = resultado[i];
    nome2[strlen(resultado)-1]='\0';    
    if (strlen(nome2) == 0)
       repete = 0;
 };//fim do while    
}

main(){
 char nome1[50], ultimo[50];

 do{
 printf("\n Digite o nome completo: ");
 gets(nome1);
 }while(strlen(nome1)==0);
 sobrenome(nome1,ultimo);
 printf("\n Sobrenome = %s", ultimo);

 printf("\n\n");
 system("pause");     
       
}
