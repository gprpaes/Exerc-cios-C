// Programa que calcula o maior fator primo de 600851475143 usando o Crivo de Erastostenes

#include <stdio.h>
#include <math.h>


unsigned long int crivo_erastostenes(long int valor);

int main(void)
{
	long int valor, limite;
	printf("Digite o valor que deseja decompor: ");
	scanf("%ld", &valor);
	limite = crivo_erastostenes(valor);
	printf("O limite do crivo é: \n%ld", limite);
	
	
	
	return 0;
}


unsigned long int crivo_erastostenes(long int valor)
{
	
	long limite = (long) sqrt(valor);
	return limite;
	
	
	
	
	
}
