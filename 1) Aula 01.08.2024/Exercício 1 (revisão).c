/* Ler 5 números inteiros e contar quantos são positivos, negativos e zero. 
Imprimir o resultado na tela. Construa 2 soluções diferentes para o problema: 
Uma solução sem vetor e outra aplicando vetores.*/

#include<stdio.h> // Biblioteca comandos entrada e saída
#include<math.h> // Biblioteca matemática

int main(void)
{
	int conta, numero, contapositivo=0, contanegativo=0, contazero=0;
	
	
	for ( conta = 1  ; conta <=5  ; conta++){
		
		printf("Digite o valor %d : ",conta);
		scanf("%d", &numero);
		
		if (numero > 0 )
		{
			contapositivo = contapositivo +1; // contapositivo++
			
		}else if( numero <0){
			contanegativo++;
			
		}else if (numero ==0 ){
			contazero++;
		}
			
	}
	
	printf("\n Total de valores positivos : %d", contapositivo);
	printf("\n Total de valores negativos : %d", contanegativo);
	printf("\n Total de valores zero : %d", contazero);
	
	return 0 ;
}
