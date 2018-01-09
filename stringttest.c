#include <stdio.h>



int main(void){
	
	char name[50];
	float cash;
	
	
	printf("Enter family name: ");
	scanf("%s", name);
	printf("Enter cash: ");
	scanf("%f", &cash);
	
	printf("The %s family just may be %03.2f dollars richer!", name, cash); 
	
	
	
	
	return 0;
	
}
