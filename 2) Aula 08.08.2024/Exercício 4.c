/* Desenvolva um programa para auxiliar o Banco Serra Ltda. O presente programa deve solicitar o 
cadastro dos clientes de um banco, onde o mesmo armazena o número da conta, o nome do cliente, o 
telefone e o saldo do cliente, de no máximo 50 clientes de um banco. O saldo dos clientes deve ser 
lido e armazenado em um vetor de 50 posições.*/

#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int qntdC, i;
	int numConta[50], clas[3] = {0};
	float saldo[50] = {0};
	float total = 0, media;
	char nome[50][50], telefone[50][15];
	
	do{
		printf("Informe a quantidade de clientes (0 a 50): ");
        scanf("%d", &qntdC);
        
	}while (qntdC < 1 || qntdC > 50);
	
	for (i=0; i<qntdC; i++){
		
		printf("\nCliente %d:\n", i + 1);
        printf("Digite o número da conta: ");
        scanf("%d", &numConta[i]);
        printf("Digite o nome do cliente: ");
        scanf(" %[^\n]%*c", nome[i]); 
        printf("Digite o telefone: ");
        scanf(" %s", telefone[i]);
        printf("Digite o Saldo: ");
        scanf("%f", &saldo[i]);
			
		if (saldo[i] < 0) {
			
            clas[0]++;
            
        } else 
			if (saldo[i] <= 1500) {
				
            clas[1]++;
            
        } else {
        	
            clas[2]++;
        }        
        
        total += saldo[i];
	}
	
	if (qntdC > 0) {
		
        media = total / qntdC;
        
    } else {
    	
        media = 0;
    }
	
	printf("\nCadastro de Clientes:\n");
	
    for (int i = 0; i < qntdC; i++) {
    	
        printf("Conta: %d | Nome: %s | Telefone: %s | Saldo: %.2f\n", numConta[i], nome[i], telefone[i], saldo[i]);
    }
	
	printf("\nQuantidade de clientes com saldo negativo: %d\n", clas[0]);
    printf("Quantidade de clientes com saldo entre 0 e 1500: %d\n", clas[1]);
    printf("Quantidade de clientes com saldo acima de 1500: %d\n", clas[2]);
    printf("Média dos saldos: %.2f\n", media);
}
