#include <stdio.h>
#include <string.h>



int main(void)
{
	char nome[50];
	int ascii, aux;
	
	printf("Entre com o nome: ");
	scanf("%s", nome);
	aux = strlen(nome);
	
	for(int i = 0; i < aux; i++){
		
		ascii = (int) nome[i];
		printf("%d ", ascii);
		
		
		
	}
	
	return 0;
}
