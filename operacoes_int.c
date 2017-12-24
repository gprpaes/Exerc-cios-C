#include <stdio.h>



int main (void)
{
	int num;
	
	
	
	do
	{
		
		printf("Digite um numero maior do que zero ");
		scanf("%d", &num);
		if (num <=0){
		printf("Esse número nao é valido\n");
	}
	else{
		printf("Válido");
	}
		
	}while(num <= 0);
	
	
	return 0;
}


