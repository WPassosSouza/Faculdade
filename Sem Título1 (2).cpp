#include<stdlib.h>
#include<stdio.h>
#define tam 10


main(){
	
	int array[tam], acumulador[tam];
	int i=0;
	
	printf("Entre com 10 numeros\n");
	for(i=0;i<tam;i++){
		
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<tam;i++){
		
		printf("\n\t***Teste do Vetor***");
		
		printf("Posicao->: [%d], Numeros: [%d]\n", i+1, array[i]);
		printf("\n\n");
	
	}
	
	
	for(i=0;i<tam;i++){
		
		acumulador[i]=acumulador[i-1]+array[i];
		printf("Posicao->: [%d], Numeros: [%d]\n", i+1, acumulador[i]);
		
	}
	
	
	
}
