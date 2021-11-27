#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num;
	int tabuada;
	int resultado;
	printf("\nEsse algoritmo lerá um número inteiro e irá mostrar a devida tabuada\n");
	printf("\nEscreva um número inteiro:\n\n");
	scanf("%d", &num);
	printf("\n");
	while(tabuada<=9){
		tabuada= tabuada+1;
		resultado= num*tabuada;
		printf("%d", num);
		printf(" x ");
		printf("%d", tabuada);
		printf(" = ");
		printf("%d", resultado);
		printf("\n\n");
}
}
