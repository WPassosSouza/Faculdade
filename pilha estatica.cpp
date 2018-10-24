#include<stdio.h>
#include<stdlib.h>

int const MAX_PILHA=1000;

int Pilha[MAX_PILHA];

int topo=0;	
	
void pilha_contrutor(){
	
	topo=-1;	
}
	
	
bool pilha_vazia(){
	
	if(topo==-1)
		return true;
	else
		return false;		
}	

bool pilha_cheia(){
	
	if(topo==MAX_PILHA-1)
		return true;
	else
		return false;	 
}

bool pilha_push(int valor){  //empilhar ou empurrar

	if(pilha_cheia()){
		
		return false;
		
	}
	else{
	
		Pilha[topo]=valor;
		topo++;	
	}	
}

bool pilha_pop(int &valor){  //desempilhar
	
	if(pilha_vazia()){
		return false;
		
	}
	else{
	
		valor=Pilha[topo];
		topo--;
		return true;
	}	
}

bool pilha_consulta(int &valor){
	
		if(pilha_vazia()){
		return false;
		
	}
	else{
	
		valor=Pilha[topo];
		topo--;
		return true;
	}	
}

int pilha_tamanho(){
	return topo+=1;
}

main(){
	
	int valor;
	
	pilha_contrutor();
	pilha_push(5);
	pilha_push(7);
	pilha_push(9);
	pilha_push(1);
	//pilha_push(2);
	
	pilha_pop(valor);
	
	printf("\n %d \n", valor);
	printf("\n Quantidade do tamanho da pilha: %d itens!\n", pilha_tamanho());
	
	
	system("pause");
	return 0;
}
