#include<stdio.h>
#include<stdlib.h>
int main(void){
	char nombre[20];
	printf("\nDi mi nombre\n");
	scanf("%s", &nombre);
	printf("\nMi nombre es ");
	printf("%s", nombre);
	printf("\n\n");
       	return(0);
}
