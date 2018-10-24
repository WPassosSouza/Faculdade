#include<stdio.h>
#include<stdlib.h>


struct{
	
	int *dia, *mes,*ano;
	
}data;



main(){
	
	printf("Entre com o dia: ");
	scanf("%d", &data.dia);
	
	printf("Mes: ");
	scanf("%d", &data.mes);
	
	printf("Ano: ");
	scanf("%d", &data.ano);
	
	printf("\n%d/%d/%d", data.dia,data.mes,data.ano);
	
}
