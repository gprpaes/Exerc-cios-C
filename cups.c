#include <stdio.h>

int main (void){
	
	float cups;
	float pints =0.0, ounces=0.0, tablespoon=0.0, teaspoon=0.0;
	
	printf("Entre com o valor em cups: ");
	scanf("%f", &cups);
	
	pints = (2.0 * cups);
	ounces = (float) (cups/8.0);
	tablespoon = (ounces/2.0);
	teaspoon = (tablespoon/3.0);
	
	printf("%f %f %f %f ", pints, ounces, tablespoon, teaspoon);
	
	
	
	
	return 0;
}
