#include <stdio.h>
#include <stdlib.h>
	void main(){
		float compra;
		float descuento;
		printf("\nCual fue el precio de compra\n");
		scanf("%f", &compra);
		if(compra>300){
			descuento=compra-compra*0.1;
			printf("\nHola! Como tu compra cuesta más de R$300, obtienes un 10 por ciento de descuento\n");
			printf("\nEl valor anterior era R$");
			printf("%f", compra);
			printf(", pero con descuento era R$");
			printf("%f", descuento);
			printf("\n\n");
		}
		if(compra>=200&&compra<=299){
			descuento= compra-compra*0.05;
			printf("\nHola! Como su compra cuesta entre R$200 y R$299, tiene un 5 por ciento de descuento.\n");
			printf("\nEl valor anterior era R$");
			printf("%f", compra);
			printf(", pero com descuento era R$");
			printf("%f",descuento);
			printf("\n\n");
		}
		if(compra<200){
			printf("\nEl valor es R$");
			printf("%f",compra);
			printf("\n\n");
		}
	}
