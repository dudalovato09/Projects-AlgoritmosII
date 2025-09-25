#include <stdio.h>
#include <conio.h>
//==============================================================================
FILE *arq;
//==============================================================================
main (void)
{
     int cont=0, num=2;
     arq = fopen ("exercicio 1.txt", "w");
     while (cont<20)
     {
          if (num%2==0)
          {
               fprintf (arq, "%d\n", num);
               printf ("%d\n", num);
               cont++;
          }
          num++;
     }
     fclose(arq);
     getch();
}
