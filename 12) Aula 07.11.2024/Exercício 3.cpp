#include <stdio.h>
#include <conio.h>
main(void)
{
   FILE *ARQ;
   int i;
   ARQ = fopen("ex3.txt","w");
   for(i=100; i<=200; i++)
   {
              if(i%4==0)
              {
                        fprintf(ARQ, "%d ", i);
              }
   }
   fclose(ARQ);
   printf("\n Relatorio caracter por caracter\n\n");
   printf("Os numeros de 100 a 200 divisiveis por 4 sao.\n");
   ARQ = fopen("ex3.txt","r");
   while ((i = fgetc(ARQ)) != EOF)
       printf("%c", i);
   fclose(ARQ);
   getch();
}
