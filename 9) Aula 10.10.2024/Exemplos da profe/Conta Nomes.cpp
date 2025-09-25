#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main(){
 char nome1[50];//nome lido
 char nome2[50];//nome que será manipulado
 char diferenca[50]="";//receberá cada parte do nome
 char *resultado;//receberá resultado da função strstr
 int i; //controle do for
 int repete=1; //controla a repetição do while
 int conta;//conta a quantidade de palavras
 do{
 printf("\n Digite o nome completo: ");
 gets(nome1);
 }while(strlen(nome1)==0);//consiste se o usuário digitou algo
 printf("\n tamanho nome lido: %d\n", strlen(nome1));
 if (strlen(nome1)!= 0)
 {
 strcpy(nome2,nome1);
 conta = 0;
 while(repete)
 {
    if (strstr(nome2," "))//procura um espaço em branco no nome2
    {
       resultado = strstr(nome2," "); //atribui para a string resultado o conteudo a partir do espaço em branco
       strncpy(diferenca,nome2,(strlen(nome2)-strlen(resultado)));//copia para a string diferença n caracteres
       diferenca[(strlen(nome2)-strlen(resultado))]='\0';  // finaliza a string diferença 
    }   
    else
       //if (strcmp(nome2,"")!=0)  
       if (strlen(nome2)!=0)//tem conteúdo na variavel nome2?
       {                               
          strncpy(diferenca,nome2, strlen(nome2));//copia o último nome
          diferenca[strlen(nome2)]='\0';//finaliza a string diferença
          repete = 0; //altera variavel repete para finalizar while
       }
    if (strlen(diferenca) != 0)//se diferença tem conteúdo
    {
        conta++;  //conta uma palavra
    }
    for (i=1;i<strlen(resultado);i++)
           nome2[i-1] = resultado[i]; //copia conteudo de resultado para nome2
    nome2[strlen(resultado)-1]='\0';//finaliza a string nome2
    if (strlen(nome2) == 0)//se nome2 está vazio
       repete = 0;//altera repete para finalizar while
 };//fim do while
 printf("\n O nome tem %d palavras", conta);
}
 else
   printf("\n voce nao digitou um nome");
 printf("\n\n");
 system("pause");           
}
