#include <stdio.h>


int main (void){
	
int inteiro = 1;
float flutuante = 1.0;

printf("Gera Overflow....\n");
getchar();
printf("Int Overflow....\n");
getchar();

while ( inteiro != 0){
	
	printf("%d\n", inteiro);
	
	
	inteiro *= 2;
}

printf("\nFim do loop\n");
getchar();

printf("Float Overflow....\n");
getchar();

while(flutuante != 0){
	
	printf("%f\n", flutuante);
	flutuante += 100.1;
	
	
}

printf("\nFim do loop");
return 0;
}

