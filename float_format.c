#include <stdio.h>


int main(void){
	
	float num;
	
	printf("Entre com o número: ");
	scanf("%f", &num);
	
	printf("%f\n%e\n%a", num, num, num);
	
	
	return 0;
}
