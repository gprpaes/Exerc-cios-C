// Programa que calcula a soma nos números impares na sequência fibonacci

#include <stdio.h>

int main(void)
{
	int n, a, b, aux, soma;
	
	printf("Digite o tamanho da sequência: ");
	scanf("%d", &n);
	
	
	a = 0;
	b = 1;
	soma = b;
	
	
	for(int i = 0; i<=n;i++)
	{
		aux = a + b;
		a = b;
		b = aux;
		
		
		
		if(aux % 2 != 0)
		{
			soma += aux;
		}
		
	}
	
	printf("A soma para essa sequência fibonacci é: %d", soma);
	
	return 0;
}

