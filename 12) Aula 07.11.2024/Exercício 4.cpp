#include <stdio.h>
#include <conio.h>
main(void)
{
   FILE *ARQ;
   char registro[100];
   int i;
   ARQ=fopen("ex4.txt","w");
   for(i=0;i<5;i++)
   {
                   printf("\nInforme: Nome, Idade, Endereco. [Separados por virgulas]\n ");
                   fgets(registro,100,stdin);
                   fputs(registro,ARQ);
                   printf("\n");
   }  
   fclose(ARQ);
   printf("\n\nRelatorio do Arquivo\n\n");
   ARQ=fopen("ex4.txt","r");
   if (ARQ == NULL)
   {  
           printf ("\nerro ao abrir o arquivo ");
   }  
   while(fgets(registro,100,ARQ)!=NULL)
   {
           printf("%s",registro);
   }
   fclose(ARQ);
   getch();
}
