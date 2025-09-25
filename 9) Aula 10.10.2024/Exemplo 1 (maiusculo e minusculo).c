/* - Getch e getche: le um caracter e permite que o usuário digite apenas 1 caracter e da enter para que ele não consiga escrever mais 
   - Getchar: le um caracter e permite que o usuário escreva apenas 1, porém não da enter
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
	
	printf("\n sexo minúsculo = %c", sexo);
	sexo = toupper(sexo);
	
	printf("\n sexo maiúsculo = %c", sexo);
	printf("\n Digite um nome:");
	gets(nome);
	strlwr(nome);
	
	printf("\n Nome em minúsculo = %s", nome);
	strupr(nome);
	
	printf("\n Nome em maiúsculo = %s", nome);	
}
