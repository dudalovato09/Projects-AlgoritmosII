/*Lê data e retorna dia da semana correspondente*/

#include <stdio.h>
#include <conio.h>
#define ESC 27
main()
{
   char diasemana[7][14]={ "Domingo", "Segunda-feira", "Terça-feira",
                           "Quarta-feira", "Quinta-feira",
                           "Sexta-feira", "Sabado" };
   int dia, mes, ano;
   float f;

   do{
      printf("\nDigite a data na forma dd mm aaaa:  ");
      scanf("%d%d%d", &dia, &mes, &ano);

      f = ano + dia + 3 * (mes - 1) - 1;
      if( mes < 3 )
         ano--;
      else
         f -= int(0.4 * mes + 2.3);
    
      f += int(ano/4) - int((ano/100 + 1) * 0.75);
      f = int(f)%7;

      printf("%s \n", diasemana[int(f)]);
   }while(getche() != ESC);
}
