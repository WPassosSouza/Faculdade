#include<stdio.h>
#include<stdlib.h>
#define max 5

int quicksort(int vetor[max], int primeiro, int ultimo){
	int i,j;
	int m,aux;
	
	
	printf("entrei no sorte");
	
	i=primeiro;
	j=ultimo;
	m=vetor[(i+j)/2];
	
	do{
		
		while(vetor[i] < m)
		 i++;
		while(vetor[j] > m)
		 j--;
		
		if(i<=j){
			aux=vetor[i];
			vetor[i]=vetor[j];
			vetor[j]=aux;
			i++;
			i--;
		}
		
	}while(i<=j);
	
		
	if(primeiro<j)
		return quicksort(vetor,primeiro,j);
	
	if(ultimo>i)
		return quicksort(vetor,i,ultimo);
		
}

main(){
	
	int vetor[max],x,y,i;
	
	for(i=0;i<max;i++){
		
	scanf("%d", &vetor[i]);
	
	}
	x = vetor[0];
	y = vetor[4];
	
	quicksort(vetor,x,y);
	
	for(i=0;i<max;i++){
	
	printf(" %d", vetor[i]);
	
	}
	system("pause");
	

}
