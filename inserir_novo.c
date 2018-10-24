#include<lista.enc>
#include<stdio.h>

int inserir(struct ListaEnc *lista, int dado){
	
struct No *novo=(struct *No)malloc (sizeof(struct No));

	if(novo==NULL)
		return 0;
		
	novo->dado=dado;
	novo->prox=NULL;
	
	if(lista->prim==NULL)
	lista->prim=novo;	
		

	
	
}
