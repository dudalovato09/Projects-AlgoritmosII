//Bruno Golin e Eduarda Lovato

#include<stdio.h>
#include <locale.h>
#include <string.h>

#define max 3

typedef struct {
	int ano ;
	char nome [max];
	int num_fam ;
	int num_mor ;
	float aux ;
	char cat [max];
	float alt;
}Cadastro;

void cadastroDados(Cadastro familia[], int total);
float mediaEnchente(Cadastro familia[], int total);
void relatorio(Cadastro familia[], int total);
void relatorio2(Cadastro familia[], int total);

int main(){
	setlocale(LC_ALL, "Portuguese");
	Cadastro familia[max];
	int n;
	float media;
	
	do{
		printf("Digite quantos cadastros quer fazer? ");
		scanf("%d", &n);
		
		if(n < 1 || n > 300){
			printf("Valor inv�lido! Por favor redigite um numero maior que 1 ou menor que 300!!");	
		}
		
	}while(n < 1 || n > 300);
	
	cadastroDados(familia, n);
	media = mediaEnchente(familia, n);
	printf("M�dia %f", media);
	relatorio(familia, n);
	relatorio2(familia,n);
}


void cadastroDados(Cadastro familia[], int total) {
    for (int i = 0; i < total; i++) {
        printf("\nDigite os dados do cadastro %d\n", i + 1);

        printf("\nAno da enchente: ");
        scanf("%d", &familia[i].ano);

        printf("Nome Munic�pio: ");
        scanf(" %[^\n]", familia[i].nome);

        printf("N�mero de fam�lias desabrigadas: ");
        scanf("%d", &familia[i].num_fam);

        printf("N�mero de mortos: ");
        scanf("%d", &familia[i].num_mor);

        printf("Altura m�xima da enchente em cent�metros: \n");
        scanf("%f", &familia[i].alt);
    }
}

float mediaEnchente(Cadastro familia[max], int n)
{
int j;
float total=0,m;

for (j=0;j<n;j++)
{
total=total+familia[j].alt;

}
m=total/n;
return m;
}

void relatorio(Cadastro familia[], int total) {
   
   int totalFam = 0;
   int totalMor = 0;
   int maior = 0;
   
    for (int i = 0; i < total; i++) {
    	
    	totalFam = totalFam + familia[i].num_fam;
    	totalMor = totalMor + familia[i].num_mor;
    	
    	 if (familia[i].alt > familia[maior].alt) {
            maior = i;
        }
    	
    }
    printf("\nTotal de cadastros: %d", total);
    printf("\nTotal de fam�lias atingidas: %d", totalFam);
    printf("\nTotal de mortos: %d", totalMor);
   	printf("\nAno da maior enchente: %d (Munic�pio: %s) (Altura m�xima: %f)\n", familia[maior].ano, familia[maior].nome, familia[maior].alt);
}

void relatorio2(Cadastro familia[], int total) {
	for (int i = 0; i < total; i++) {
	printf("\nAux�lio do governo\n");
	if (familia[i].ano == 2023){
	familia[i].aux = familia[i].num_fam * 1600;
	printf("\nCadatro %d recebe R$ %f", i+1, familia[i].aux);
	}
	else{
		printf("\nCadastro %d n�o recebeu aux�lio.", i+1);
	}
	
	printf("\nCategoria de enchente %s\n", familia[i].cat);
	
	 if (familia[i].alt > 0 && familia[i].alt <= 200) {
            strcpy(familia[i].cat, "B - baixa");
        }
        else if (familia[i].alt > 200 && familia[i].alt <= 800) {
            strcpy(familia[i].cat, "M - m�dia");
        }
        else{
            strcpy(familia[i].cat, "A - alta");
        }
	
}
}
