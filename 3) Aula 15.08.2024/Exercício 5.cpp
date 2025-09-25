/* Faça uma função que receba um valor único inteiro que representa um valor em segundos. 
Está função deverá convertê-lo para horas, minutos e segundos. O valor deve ser lido no main() 
e passado por parâmetros para a função. Os valores em horas, minutos e segundos devem ser impressos 
na função criada, assim não terá retorno.*/

#include<stdio.h>
#include<locale.h>

void converterTempo(int seg){
	setlocale(LC_ALL, "Portuguese");
	int hrs, min, restSeg;
	
	hrs = seg / 3600;
	min = (seg % 3600) / 60;
	restSeg = seg % 60;
	
	printf("%d segundos é: %d horas, %d minutos e %d segundos\n", seg, hrs, min, restSeg);
}

int main(){
	int segundos;
	
	printf("Digite os segundos:");
	scanf("%d", &segundos);
	
	converterTempo(segundos);
		
}
