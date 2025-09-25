/* Fa�a uma fun��o que receba um valor �nico inteiro que representa um valor em segundos. 
Est� fun��o dever� convert�-lo para horas, minutos e segundos. O valor deve ser lido no main() 
e passado por par�metros para a fun��o. Os valores em horas, minutos e segundos devem ser impressos 
na fun��o criada, assim n�o ter� retorno.*/

#include<stdio.h>
#include<locale.h>

void converterTempo(int seg){
	setlocale(LC_ALL, "Portuguese");
	int hrs, min, restSeg;
	
	hrs = seg / 3600;
	min = (seg % 3600) / 60;
	restSeg = seg % 60;
	
	printf("%d segundos �: %d horas, %d minutos e %d segundos\n", seg, hrs, min, restSeg);
}

int main(){
	int segundos;
	
	printf("Digite os segundos:");
	scanf("%d", &segundos);
	
	converterTempo(segundos);
		
}
