#include <stdio.h>
#include <conio.h>
#include <string.h>

#define limite 50
#define maximo 10

typedef char texto[limite];

main(){
       texto nomes[maximo], primeiro, ultimo;
       int i, qtd, tamanho;

 printf("\n Digite a quantidade de pessoas: ");
 scanf("%d", &qtd);
     
 for (i=0; i < qtd; i++)
   {    
     printf("\n\nDigite o nome completo: ");   
     fflush(stdin);
     gets(nomes[i]);     
     printf("O nome lido eh: %s",nomes[i]);
  }
     printf("\n\n");  
  for (i=0; i < qtd; i++)
   {    
     printf("\nNome[%d]: %s", i, nomes[i]);   
  }
 
  strcpy(primeiro,nomes[0]);
  strcpy(ultimo,nomes[0]);  
  for (i = 1; i < qtd; i++)
   {
     if (strcmp(nomes[i], primeiro) < 0)
        strcpy(primeiro, nomes[i]);
     if (strcmp(nomes[i],ultimo) > 0)
        strcpy(ultimo, nomes[i]);    
    }
    
  printf("\n\n Nome menor (ordem alfabetica): %s", primeiro);
  printf("\n\n Nome maior (ordem alfabetica): %s", ultimo);  
  
  
getch();
}
