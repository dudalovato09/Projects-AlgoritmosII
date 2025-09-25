/* Este exemplo que imprime o valor retornado em várias situações*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
main() 
{ 
   printf("\nA==A?\n%d", strcmp("A", "A"));
   printf("\nA==B?\n%d", strcmp("A", "B"));
   printf("\nB==A?\n%d", strcmp("B", "A"));
   printf("\nC==A?\n%d", strcmp("C", "A"));
   printf("\ngato==gata?\n%d", strcmp("gato", "gata"));
   getch();
} 
