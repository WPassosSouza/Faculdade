#include<stdio.h>
#define tam 10

main(){
	
	int i,vetor[tam],num;
	
	
	
	printf("total de numeros: ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
	
	printf("Numero: |%d|\t", i+1);
	scanf("%d", &vetor[i]);	
	
	}
	
	
	for(i=0;i<num;i++){
	
	if(vetor[i]==0)
		
		printf("vetor 0");
		return 0;
	
	}
	
	else{
		
		for(i=0;i<num-1;i++){
			
			vetor[i]=vetor[i+1];
			//num--;
			printf("vetor %d", vetor[i+1]);
			return 1;
	
		}
		
		
	}
	
	
}
