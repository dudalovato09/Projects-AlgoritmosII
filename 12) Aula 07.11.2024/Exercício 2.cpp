
//Crie um arquivo texto que armazene dez valores. OBS. UTILIZE LA�O.

#include <stdio.h>
#include <conio.h>
//==============================================================================
FILE *arquivo;
//==============================================================================
main (void)
{
     char valor[50];
     int i;
     printf ("\n\n\n\n\n");
     arquivo = fopen ("exercicio 2.txt", "w");
     for (i=0; i<10; i++)
     {
          printf ("\tDigite um valor: ");
          fgets(valor, 50, stdin);
          fputs(valor, arquivo); // coloca o valor do primeiro par�metro para o segundo, que � o ponteiro do arquivo.5
     }
     fclose (arquivo);
     getch();
}
