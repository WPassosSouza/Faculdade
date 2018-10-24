#include<stdio.h>
#include<stdlib.h>
#define max 3

int PILHA[max];
int topo=0;

int listar_pilha(){
	int i;
	
	for(i=0;i<=topo;i++){
		
		printf("\n%d", PILHA[i]);
		
	}}

void pilha_construtor(){
	
	topo=-1;

}

bool pilha_vazia(){

	if(topo==-1){
		return true;
	}
	
	else{
	
	return false;
	}
}

bool pilha_cheia(){
	
	if(topo==max-1){
		
		return true;
	}
	else{
		
		return false;
	}
	
}

bool pilha_push(int &valor){
	
	if(pilha_cheia()){
		printf("Stack OverFlow!\nPilha Cheia");
		return false;
	}
	else{
		
		topo++;
		PILHA[topo]= valor;
		printf("%d",PILHA[topo]);
	}
}


bool pilha_pop(int &valor){
	
	if(pilha_vazia()){
			printf("Quer deletar o que nao existe,animal!");
		return false;
		
	}
	else{
	topo--;	
	valor=PILHA[topo];
	
	return true;
	
	}
	
}

bool pilha_consulta(int &valor){
	if(pilha_vazia()){
		
		return false;
	}
	else{
		
		
		valor=PILHA[topo];
		return true;
	}
}

main(){
	
	int i,op, valor, vetor[max];
	
	pilha_construtor();
	
	do{
		
	printf("\n\n\t--- Digite o numero desejado --- \n	");
    printf("\n1 Gravar numero na pilha :");
    printf("\n2 Excluir numero na pilha :");
    printf("\n3 Consultar numero na pilha :");
    printf("\n4 Sair :");
    scanf("%d",&op);

		switch(op){
			
		case 1:
		printf("\n\t*** Entre com os numeros ***\n");
		
			
			printf("Numero: ");
			scanf("%d", &valor);
			pilha_push(valor);
				
			

			break;
				
			case 2:
			
			topo--;	
			
			printf("\n\nTarefa concluida!\n\n");
			
			break;
			
			case 3:
			
			listar_pilha();
						
			break;
			case 4:
			printf("\nSaindo do Programa!!!");
			
			break;
			
			default: break;
				
				
		}
		
	}while(op!=4);
	
}




	
	

