#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num;
	int tabla;
	int resultado;
	printf("\nEste algoritmo leerá un número y presentará su tabla de multiplicar adecuada\n");
	printf("\nEscribe un entero:\n\n");
	scanf("%d", &num);
	printf("\n");
	while(tabla<=9){
		tabla= tabla+1;
		resultado= num*tabla;
		printf("%d", num);
		printf(" x ");
		printf("%d", tabla);
		printf(" = ");
		printf("%d", resultado);
		printf("\n\n");
}
}
