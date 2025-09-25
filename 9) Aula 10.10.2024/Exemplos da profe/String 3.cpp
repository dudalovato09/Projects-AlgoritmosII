#include <stdio.h>
#include <conio.h>
#include <string.h>

#define limite 50
#define maximo 10

typedef char texto[limite];

main(){
       texto palavra, inverte;
       int i, conta;
       char letrasmaiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZÇ";
       char letrasminusculas[] = "abcdefghijklmnopqrstuvwxyzç";

 printf("\n\n Inverte palavra: ");
 printf("\n Digite uma palavra: ");
 fflush(stdin);
 gets(palavra);
     
 // inverter a palavra
 strcpy(inverte, palavra);
 strrev(inverte);
 printf("A palavra %s invertida fica %s", palavra, inverte);
 
 // testar se palavra eh palindrome (le-se igual de traz-para-frente)
  printf("\n\n Testa palindrome: ");
 printf("\n Digite uma palavra palindrome: ");
 fflush(stdin);
 gets(palavra); 
 strcpy(inverte, palavra);
 strrev(inverte);
 if (strcmp(palavra,inverte) == 0)
    printf("\n Sao palindromes...");
 else
    printf("\n Nao sao palindromes...");
 
     // contar quantidade de letras maiusculas
 printf("\n\n Conta maiusculas: ");     
 printf("\n Digite uma palavra: ");
 fflush(stdin);
 gets(palavra);

     conta = 0;
     for(i = 0; i < strlen(palavra); i++)
     {
              if(strchr(letrasmaiusculas, palavra[i]))
                  conta++;
     }
     printf("Numero de Maiusculas: %d\n\n", conta);
     
     
     // contar quantidade de letras minusculas
 printf("\n\n Conta minusculas: ");
 printf("\n Digite uma palavra: ");
 fflush(stdin);
 gets(palavra);
 
     conta = 0;
     for(i = 0; i < strlen(palavra); i++)
     {
              if(strchr(letrasminusculas, palavra[i]))
                  conta++;
     }
     printf("Numero de Minusculas: %d\n\n", conta);  
  
getch();
}
