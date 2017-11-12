//Programa que calcula a soma dos múltiplos de 3 e múltiplos de 5 menores que 1000

#include <stdio.h>

int main(void)
{
	int soma = 0;
	
	for(int i = 0; i < 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			soma += i;
		
	}
	printf("A soma dos múltiplos é: %d", soma);
	
	return 0;
}

