#include<stdio.h>
#include<stdlib.h>
#define tam 10

main(){
	
	int conjuntoA[tam], conjuntoB[tam];
	int i=0;
	int num=0;
	
		printf("Entre com os numeros do comjuntos [A]\n");
		for(i=0;i<tam;i++){
		
		printf("Entre com numero [%d] - ", i+1);
		scanf("%d", &conjuntoA[i+1]);
	}	
	
	printf("\nEntre com os numeros do comjuntos [B]\n");
	
	for(i=0;i<tam;i++){
		
		printf("Entre com numero [%d] - ", i+1);
		scanf("%d", &conjuntoB[i+1]);
	}	
	
	printf("Deseja verificar qual numero que está nos 2 Grupos?");
	scanf("%d", &num);


	for(i=0;i<tam;i++){
		
		if(conjuntoA[i]==num && conjuntoB[i]==num)
		
		printf("Numero encontrado!!! %d", num);
		break;
	}
			
		
	
	
	// O(N)
	find(p){
		if(id[i]==p)
			return p;
		else
			return find(id[p]); 
	}
	
		//QuickUnion//
	Union(p,q){
	 	
		p=find(p);
		q=find(q);
		id[p]=q; //o id da menor arvores aponta representante de 'p' para o representante de 'q' : Faz a uniao da arvores; 
	}	
	
	Union(p,q){
	 	
		p=find(p);
		q=find(q);
			if(p==q)
				return 
		
		id[p]=q; // aponta representante de 'p' para o representante de 'q' : Faz a uniao da arvores; 
	}	
	
	
	
	
	
	
	
	
	
	
		
	
	
}
