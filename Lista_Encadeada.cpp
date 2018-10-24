#include<stdio.h>
#Include<stdlib.h>


void inicializar(struct Lista Enc *lista){

	
	lista->prim=NULL;
	lista->ult=NULL;
	lista->qtd=0;
	
	
}

int inserir(struct ListaEnc *lista, int dado){
	
	struct No *novo=(struct No*) malloc(sizeof (struct No));
	if(novo==NULL)
		return 0;
	novo->dado=dado;
	novo->prox=NULL;
	
	if(lista->prim==NULL)
	lista->prim=novo;
	
	else
	lista->ult->prox=novo;
	
	lista->ult=novo;
	lista->++;
	
	
	return 1;
	
}

void imprimir(struct )

main(){
	
	
	
	
	
	
	
}
