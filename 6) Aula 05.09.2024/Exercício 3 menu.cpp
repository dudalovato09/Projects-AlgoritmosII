#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//Prototipação das funções
int cabecalho(),check=0;
void le(int v[3][3]);
float soma(int v[3][3]);
void maior(int v[3][3]);
void menor(int v[3][3]);
void somalinha(int v[3][3]);
void somacoluna(int v[3][3]);
void diagoprin(int v[3][3]);
void minimax(int v[3][3]);
void invertida(int v[3][3]);
void somapar(int v[3][3]);
void somaimpar(int v[3][3]);
void identidade(int v[3][3]);
void diagosec(int v[3][3]);

main( void)
{
	int matriz[3][3],op;
	float media;
	do
	{
		op=cabecalho();
		switch(op)
		{
			case 1:
				le(matriz);
				break;
			case 2:
				media=soma(matriz);
		    	break;	
		    case 3:
				printf("\nA media da matriz eh: %.2f",media);
		    	break;
			case 4:
				maior(matriz);
		    	break;
			case 5:
				menor(matriz);
		    	break;
			case 6:
				minimax(matriz);
		    	break;
			case 7:
				somalinha(matriz);
		    	break;
			case 8:
				somacoluna(matriz);
		    	break;
			case 9:
				diagoprin(matriz);
		    	break;
			case 10:
				diagosec(matriz);
		    	break;
			case 11:
				invertida(matriz);
		    	break;
			case 12:
				somapar(matriz);
		    	break;
			case 13:
				somaimpar(matriz);
		    	break;
			case 14:
				identidade(matriz);
		    	break;												
		}
    }while(op!=15);
    
}

int cabecalho()
{
	int escolha;
    printf("\n\n\n1- Leitura da matriz 3 x 3");
    printf("\n2- Soma de todos os elementos da matrizes");
    printf("\n3- Media dos elementos");
   	printf("\n4- Maior elemento e sua posicao");
   	printf("\n5- Menor elemento e sua posicao");
   	printf("\n6- Elemento minimax e sua posicao");
    printf("\n7- Soma do total por linha");
	printf("\n8- Soma do total por coluna");
	printf("\n9- Soma dos elementos da diagonal principal");
	printf("\n10-Soma dos elementos da diagonal secundaria");
	printf("\n11-Impressao invertida");
	printf("\n12-Soma de todos os elementos pares");
	printf("\n13-Soma de todos os elementos impares");
	printf("\n14-A matriz lida eh uma  matriz  identidade?");
	printf("\n15-Sair.  ");
	if(check==0)
	{	
		do
		{
		   scanf("%i",&escolha);
		   if(escolha!=1)
		   {
		      	printf("\nA matriz ainda não foi lida.  ");	
		   }	
		}while(escolha!=1);
		check=1;	
	}else
	{
		scanf("%i",&escolha);	
	}


	return escolha;	
}

void le(int v[3][3])
{
	system("cls");
	int i,j;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	printf("\nInforme linha %i, coluna %i= ",i+1,j+1);
		  	scanf("%i",&v[i][j]);
		  }	
 	}  	
}

float soma(int v[3][3])
{
	system("cls");
	int i,j,soma=0;
	float med;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	soma=soma+v[i][j];
		  }	
 	}  
		printf("\nA soma da matria eh: %i ",soma); 
	med=soma/9.0;	
	return med;
}

void maior(int v[3][3])
{
	system("cls");
	int i,j,maior=v[0][0], lmaior=0,cmaior=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]>maior)
			{
				maior=v[i][j];	
				lmaior=i+1;
				cmaior=j+1;
			}  	
	      }    
 	} 
	printf("\nO maior valor da matriz eh: %i da linha %i da coluna %i. ", maior,lmaior, cmaior);  

}

void menor(int v[3][3])
{
	system("cls");
	int i,j,menor=v[0][0], lmenor=0,cmenor=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]<menor)
		  	{
		  		menor=v[i][j];
		  		lmenor=i;
		  		cmenor=j;
			}
	      }
 	}  
	printf("\nO menor valor da matriz eh: %i da linha %i da coluna %i. ", menor,lmenor, cmenor); 
}

void somalinha(int v[3][3])
{
	system("cls");
	int i,j,soma=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 		soma=0;
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	soma=soma+v[i][j];
	      }
	      printf("\nA soma da linha %i eh %i. ", i+1,soma); 
 	}  	
}

void somacoluna(int v[3][3])
{
    system("cls");
	int i,j,somac=0;
 	for(j=0;j<3;j++)
	 //laço para controlar a coluna
 	{ somac=0;
 	 	for(i=0;i<3;i++)//laço para controlar a linha
		  {
		  	
		  		somac=somac+v[i][j];
			 	
		  		  	
	      }
	      printf("\nA soma da coluna %d eh %i. ", j,somac); 
 	}  
	  
      	 	  	
}

void diagoprin(int v[3][3])
{
	int i,j,soma=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(i==j)
		    {
		    	soma=soma+v[i][j];	
	   	    }	
	      }
	      
 	}  
		 printf("\nA soma da diagonal principal eh %i. ",soma); 	
}

void minimax(int v[3][3])
{
	system("cls");
	int i,j,maior=v[0][0], lmaior=0,mini, lmini=0,cmini=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]>maior)
			{
				maior=v[i][j];	
				lmaior=i;	
			}  	
	      }    
 	}
 	mini=maior;
	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(i==lmaior)
			{
			  if(v[i][j]<mini)
				{
					mini=v[i][j];	
					lmini=i;
					cmini=j;
				}  		
			}  	
	      }    
 	}
	printf("\nO minimax eh: %i da linha %i da coluna %i. ", mini,lmini+1, cmini+1);     	   
}

void invertida(int v[3][3])
{
	int i,j;
	for(i=2;i>=0;i--)//laço para controlar a linha
 	{
 	 	 for(j=2;j>=0;j--)//laço para controlar a coluna
		  {
		  	printf("\nLinha %i da coluna %i = %i ", i+1,j+1,v[i][j]);  		
		  }  	
	          
 	}
}

void somapar(int v[3][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]%2==0)
			  {
			  	soma=soma+v[i][j]; 	
			  } 		
		  }  	
	          
 	}
 	printf("\nA soma dos valores pares eh %i. ", soma); 
}

void somaimpar(int v[3][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(v[i][j]%2!=0)
			  {
			  	soma=soma+v[i][j]; 	
			  } 		
		  }  	
	          
 	}
 	printf("\nA soma dos valores impares eh %i. ", soma); 
}

void identidade(int v[3][3])
{
	int i,j,id=1;
	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	 for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	  if ((i == j) && (v[i][j] != 1)) 
			  {
			  	id=0;
		      }else
			  {
			  	 if ((i != j) && (v[i][j] != 0))
			  	 {
			  	   	id=0;	
			  	 }
			  }		
		  }  	
	          
 	}
	if(id==1)
	{
		 printf("\nA matriz informada eh uma matriz identidade.\n");
	} else
	{
		printf("\nA matriz informada nao eh uma matriz identidade.\n");
	}	
}
void diagosec(int v[3][3])
{
	int i,j,soma=0;
 	for(i=0;i<3;i++)//laço para controlar a linha
 	{
 	 	for(j=0;j<3;j++)//laço para controlar a coluna
		  {
		  	if(i+j==2)
		    {
		    	soma=soma+v[i][j];	
	   	    }	
	      }
	      
 	}  
		 printf("\nA soma da diagonal secundaria eh %i. ",soma); 	
}


