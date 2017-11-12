#include <stdio.h>
#include <math.h>


//GERADOR DE  IMPRECISÃO

float expoente;
double gerar_impresicao(double number);
double number_maker(int exp, float real);


int main(void)
{
	int exp;
	float real;
	double numeroGerado;
	
	printf("Digite a parte real do número:\n");
	scanf("%f", &real);
	printf("Digite a potência de 10 do número:\n");
	scanf("%d", &exp);
	numeroGerado = number_maker(exp, real);
	printf("O número gerado foi %lf\n\n", numeroGerado); 
	gerar_impresicao(numeroGerado);
	
	
	
	
	
	return 0;
}


double number_maker(int exp, float real)
{
	double number = real;
	expoente = pow(10,exp);
	
	number *= expoente;
	
	return number;
}

double gerar_impresicao(double number)
{
	double number_imprecise;
	while(1)
	{
		number_imprecise = number + 1;
		number = number_imprecise - number;
		if (number != 1){
			printf("Foi gerada uma impresição\n");
			printf("O resultado encontrado foi:\n %f", number);
			break;
		}
		printf("\nO resultado encontrado foi:\n %f", number);
	    
		
	}
	
	return number;
}	
