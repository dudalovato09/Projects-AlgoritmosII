#include <stdio.h>
#include <conio.h>
#include <string.h>

#define limite 50
main(){
       char nome[limite], sobrenome[limite], primeironome[limite], nome1[limite], nome2[limite];  
       int tamanho;

     //digite seu nome completo e verifique o conteúdo da variavel
     printf("\nDigite seu nome completo: ");   
     fflush(stdin);
     scanf("%s",nome);    
     printf("\no nome lido eh: %s",nome);
     tamanho = strlen(nome); //função que retorna a quantidade de caracteres da string
     printf("\n O tamanho do dado lido eh: %d", tamanho);
     strlwr(nome); //função que converte caracteres de string para minúsculas
     printf("\no nome lido em minusculas: %s",nome);     
     strupr(nome); // função que converte caracteres da string para maiúsculas
     printf("\no nome lido em minusculas: %s",nome);  
     
     //digite seu nome completo e verifique o conteúdo da variavel
     printf("\n\n\nDigite seu nome completo: "); 
     fflush(stdin);
     gets(nome); // função que lê string com espaços em branco    
     printf("\no nome lido eh: %s",nome);
     tamanho = strlen(nome);
     printf("\n O tamanho do dado lido eh: %d", tamanho);     
     strlwr(nome);
     printf("\no nome lido em minusculas: %s",nome);     
     strupr(nome);
     printf("\no nome lido em minusculas: %s",nome);       


     printf("\n\n Digite seu sobrenome: ");
     fflush(stdin);
     gets(sobrenome);
     strupr(sobrenome);
     printf("\nDigite seu primeiro nome: ");
     fflush(stdin);
     gets(primeironome);
     strcpy(nome,sobrenome), //copia a string na direita na string da esquerda
     strcat(nome,", "); //concatena a string da direita na string da esquerda
     strcat(nome,primeironome);
     printf("\nNome completo eh: %s",nome);     
      
     printf("\n\n Digite o nome da primeira pessoa: ");
     fflush(stdin);
     gets(nome1); 
     
     printf("\nDigite o nome da segunda pessoa: ");
     fflush(stdin);
     gets(nome2);  
     
     //ordem alfabetica
     if (strcmp(nome1, nome2) == 0)
        printf ("\nOs nomes são iguais: %s - %s",nome1, nome2);
     else
     if  (strcmp(nome1, nome2) > 0)
        printf ("\nO primeiro nome eh maior que o segundo: %s - %s",nome1, nome2);         
     else
        printf ("\nO segundo nome eh maior que o primeiro: %s - %s",nome1, nome2);        
  getch();     
}
