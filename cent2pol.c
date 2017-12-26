#include <stdio.h>


int main(void){
	
	float centimetro, polegada = 2.54;
	
	printf("Digite sua altura em centimetros: ");
	scanf("%f", &centimetro);
	
	polegada *= centimetro;
	
	printf("Sua altura em polegadas é: %.2f", polegada);
	
	
	
	
		
	return 0;
}
