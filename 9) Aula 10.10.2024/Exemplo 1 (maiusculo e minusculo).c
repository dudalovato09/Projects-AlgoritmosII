/* - Getch e getche: le um caracter e permite que o usu�rio digite apenas 1 caracter e da enter para que ele n�o consiga escrever mais 
   - Getchar: le um caracter e permite que o usu�rio escreva apenas 1, por�m n�o da enter
   - Gets: le uma string*/

#include<stdio.h>
#include<conio.h> // para getche
#include<stdlib.h>
#include<ctype.h> // para tolower e toupper
#include<string.h> // para strlwr e strupr

main(void)
{
	char nome[10], sexo;
	
	printf("digite o sexo: ");
	sexo = tolower(getche());
	
	printf("\n sexo min�sculo = %c", sexo);
	sexo = toupper(sexo);
	
	printf("\n sexo mai�sculo = %c", sexo);
	printf("\n Digite um nome:");
	gets(nome);
	strlwr(nome);
	
	printf("\n Nome em min�sculo = %s", nome);
	strupr(nome);
	
	printf("\n Nome em mai�sculo = %s", nome);	
}
