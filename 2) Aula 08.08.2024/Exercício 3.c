/* Desenvolva um programa que leia um vetor A de 10 posições inteiras e um segundo vetor B e 5 posições de inteiros. 
Calcule e mostre dois vetores gerados resultantes. O primeiro vetor Resultante será composto pelos números pares gerados pelo 
elemento do primeiro vetor somando a todos os elementos do segundo vetor. O segundo vetor resultante será composto pelos números 
ímpares gerados pelo elemento do primeiro vetor somado a todos os elementos do segundo vetor.*/

#include<stdio.h>
#include<locale.h>

int main (void)
{
	int A[10], B[5], Resultado_1[10], Resultado_2[10];
	int soma, Total_B, conta_par = 0, conta_impar = 0;
	int i, j;
	
	setlocale(LC_ALL,"portuguese");

	for(i = 0; i < 10; i++){
		
		printf("Digite o valor [%d]:", i + 1);
		scanf("%d", &A[i]);
			
	}
	
	for(j = 0; j < 5; j++){
		
		printf("Digite o valor [%d]:", j + 1);
		scanf("%d", &B[j]);
		Total_B = Total_B + B[j];
	}
	
	for(i = 0; i < 10; i++){
		
		soma = A[i] + Total_B;
		
        if (soma % 2 == 0) {
		 
            Resultado_1[conta_par++] = soma;	//verifica se é par 
            
        } else { 
        
            Resultado_2[conta_impar++] = soma; //verifica se é ímpar
        }
    }
	

	
    for (i = 0; i < conta_par; i++) {	//Imprime o valor dos pares 
        printf("%d ", Resultado_1[i]);
    } 
    
    for (i = 0; i < conta_impar; i++) {	//Imprime o valor dos ímpares
        printf("%d ", Resultado_2[i]);
    }   
    
	printf("\n Vetor Resultante_1 (pares): ");
	printf("\n Vetor Resultante_2 (ímpares): ");
	
	return 0;
}
