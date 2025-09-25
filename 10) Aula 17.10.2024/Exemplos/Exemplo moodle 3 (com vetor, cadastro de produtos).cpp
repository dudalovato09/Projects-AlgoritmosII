// exemplo desenvolvido em aula - c adastra produtos e calcula  a media do preço de venda

#include <stdio.h>

typedef struct 
{

 	int codigo;
 	char descricao[30];
 	float pcusto;
 	float pvenda;
 	char cor[20];

}PRODUTO;

void leitura(PRODUTO p[3] ){

	int j;

	for (j=0;j<=2;j++)//laço para o numero de produtos
   { 
   	 printf("Digite o codigo do produto: ");
   	 scanf("%d", &p[j].codigo);

   	 printf("Digite o descricao do produto: ");
   	 fflush(stdin);
   	 gets(p[j].descricao);

   	 printf("Digite o preco de  custo do produto: ");
   	 scanf("%f", &p[j].pcusto);

   	 printf("Digite o preco de  venda do produto: ");
   	 scanf("%f", &p[j].pvenda);

   	 printf("Digite a cor do produto: ");
   	 fflush(stdin);
   	 gets(p[j].cor); 	 
   }	
}

void impressao(PRODUTO p[3] ){

	int j;

	for (j=0;j<=2;j++)//laço para impressao dos produtos
   { 
   	 printf("\nCodigo do produto: %d ", p[j].codigo);
   	 printf("\nDescricao do produto: %s ", p[j].descricao);
   	 printf("\nPreco de  custo do produto: %.2f ", p[j].pcusto);
   	 printf("\nPreco de  venda do produto: %.2f ", p[j].pvenda);
   	 printf("\nCor do produto: %s", p[j].cor); 	 
   }	
}

float calculo(PRODUTO p[3] ){

	int j;
	float total=0;
	
	for (j=0;j<=2;j++)//laço para calculo media dos produtos
   { 
   	  total = total + p[j].pvenda;
   }
   return total /3;	
}

int main() {

    PRODUTO prod[3];
    float med;
    
    leitura(prod);
    impressao(prod);
    med= calculo(prod);
    
    printf("\n Media dos valores de venda : %.2f", med);  

    return 0;
}
