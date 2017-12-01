//Programa que calcaula o maior palindromo resultado do produto de números com 3 dígitos.



#include <stdio.h>


int verifica_palindromo(int num);

int main(void)
{
	int num;
	printf("Digite o número:");
	scanf("%d", &num);
	verifica_palindromo(num);
	
	
	
	return 0;
}


int verifica_palindromo(int num)
{
		
	int num_vetor[3], num_invertido,aux;
	
	
	for(int i = 0; i <3; i++)
	{
		
		num_vetor[i] = num % 10;
		num /= 10;
		
		
		printf("%d", num_vetor[i]);
		
	}
	return 0;
}
