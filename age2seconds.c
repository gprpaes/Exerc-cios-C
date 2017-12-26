#include <stdio.h>


int main (void){
	
	float year_seconds = 3.156e7;
	int idade;
	double id_seconds;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	id_seconds = idade * year_seconds;
	
	printf("Idade em segundos %le", id_seconds);
	
	
	
	
	
	
	return 0;
}
