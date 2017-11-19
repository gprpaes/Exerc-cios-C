// PROGRAMA QUE CALCULA OS TERMOS PARES DA SEQUENCIA FIBONACCI

#include <stdio.h>


int main(void)
{
	long num1, num2, aux, soma = 0;
	
	num1 = 1;
	num2 = 1;
	
	
	do
	{
		aux = num1 + num2;
		num1 = num2;
		num2 = aux;
		
		if(aux % 2 == 0)
		{
			soma += aux;
			
		}
		
	}while(aux <= 4000000);
	
	printf("Soma: %ld", soma);
	
	
	
	
	
	
	return 0;
}
