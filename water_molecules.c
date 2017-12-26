#include <stdio.h>


int main(void){
	
	int quarts;
	float water_mass = 3e-23;
	double molecules;
	
	printf("Digite o número de quarts: ");
	scanf("%d", &quarts);
	
	molecules = ((950 * quarts)/water_mass);
	
	printf("O número de moléculas é: %e", molecules);
	
	
	return 0;
}
