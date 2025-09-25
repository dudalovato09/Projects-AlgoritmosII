#include<stdio.h>
#include<conio.h>
main(void)
{
          FILE *ARQ;
          char palavra[5];
          int i;
          ARQ = fopen("ex5.txt", "w"); 
          printf(" Escreva uma palavra de 5 caracteres: ");
          scanf("%s",&palavra);
          fprintf(ARQ, "%s", palavra);
          fclose(ARQ); 
          ARQ=fopen("ex5.txt","r");
          fscanf(ARQ,"%s",&palavra);
          for(i=5;i>=0;i--)
          {
                          printf("%c",palavra[i]);
          }          
          fclose(ARQ);       
          getch();
}
