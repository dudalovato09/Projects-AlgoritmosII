#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main(){
 char nome1[50], nome2[50], *resultado, diferenca[50]="";
 int i;
 printf("\n Digite o nome completo: ");
 gets(nome1);
 printf("\n tamanho primeiro: %d\n", strlen(nome1));
 strcpy(nome2,nome1);
 while(strstr(nome2," "))
 {
    resultado = strstr(nome2," "); 
    printf("\n resultado= %s / tamanhao= %d", resultado, strlen(resultado));
    system("pause");
    strncpy(diferenca, nome2, (strlen(nome2) - strlen(resultado)));
    printf("\n Parte = %s / tamanho= %d", diferenca, strlen(diferenca)); 
    for (i=1;i<strlen(resultado);i++)
        nome2[i-1] = resultado[i];
    nome2[strlen(resultado)-1]='\0';
    printf("\n nome= %s / tamanhao= %d", nome2, strlen(nome2));     
 };
 
 printf("\n\n");
 system("pause");     
       
}
