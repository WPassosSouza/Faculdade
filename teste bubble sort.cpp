
					// Bubble Sort //			

#include<stdio.h>
#include<stdlib.h>
#define tam 5

main(){
	
	int vetor[5];
	int i;
	int limit=4,trocou,aux=0;
	
	for(i=0;i<tam;i++){
		
		printf("Digite os numeros: |%d|", i+1);
		scanf("%d", &vetor[i]);

	}
	
	for(limit=limit-1;limit>=0;limit--){
		trocou=1;
		for(i=0;i<tam;i++){
			if(vetor[i]>vetor[i+1]){
				
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
				trocou=1;
			}
			
			if(trocou==0)
				break;
		}	
	
	}
printf("\n\t*** Resultado *** \n");
	for(i=0;i<tam;i++){
		
		
		printf("\n\tOrdenado em Ordem Crescente |%d: |%d\n",i+1, vetor[i]);
	}


}


/*

					//Selection Sort //
					
#include<stdio.h>
#include<stdlib.h>
#define tam 5
			
main(){
	
	int i,j,vetor[tam];
	int aux=0, aux2=0;
	
	printf("\n*** Selection Sort *** \n");
	
	for(i=0;i<tam;i++){
	
	printf("\nEntre com os numeros |%d|: ", i+1);
	scanf("%d", &vetor[i]);
	}
	
	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
			if(vetor[i]>vetor[j]){
			aux=vetor[i];
			aux2=vetor[j];
			vetor[j]=aux;
			vetor[i]=aux2;		
				
			}
		}
	}
	
	printf("\n*** Vetor Ordenado ***\n");
	for(i=0;i<tam;i++){
	
	printf("%d", vetor[i]);
	
	}

}
*/			

					

