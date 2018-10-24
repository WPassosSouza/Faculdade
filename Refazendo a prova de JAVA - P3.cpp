
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void mostra(){
	
	printf("\n***Programa de calculo dos quadrilatero***\n");
	
	printf("\n1 - Calcular perimetro de um quadrado quadrilatero\n");
	printf("\n2 - Calcular a Área de um retangula quadrilatero\n");
	printf("\n3 - SAIR\n");
	
}


float calc1(float lado=0){
	
	
	return lado+lado+lado+lado;
}

float calc2(float base=0, float altura=0){
	
	
	return base*altura;
		
}

main(){
	
	float lado=0, base=0,altura=0;	
	int op=0;

	do{
		
	mostra();
	
	scanf("%d", &op);
	
	if(op==1){
			
		printf("Entre com o valor do lado do quadrado: ");
		scanf("%f", &lado);
		
		printf("\nTotal do Perimetro: %.2f", calc1(lado));	
	}else
		if(op==2){
			
			printf("Entre com o valor da base: ");
			scanf("%f", &base);
			
			printf("Entre com o Valor da Altura: ");
			scanf("%f", & altura);
	
			printf("Total da Area: %.2f", calc2(base,altura));
			
		}else
			if(op==3){
				
				printf("Saindo!!!");

				
			}
	
	
	}while(op!=3);
	
	
}

