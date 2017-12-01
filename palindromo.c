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
	
	aux = num;
	
	for(int i = 0; i <3; i++)
	{
		
		num_vetor[i] = aux % 10;
		aux /= 10;
		
		
		printf("%d", num_vetor[i]);
		
	}
	
	num_invertido = ((num_vetor[0] *100) + (num_vetor[1] * 10) + num_vetor[2]);
	
	if (num_invertido == num)
	{
		printf(" É um palindromo");
		return num_invertido;
		
	}
	
   else
   {
	printf(" Não é palindromo");
	return 0;
}
}
