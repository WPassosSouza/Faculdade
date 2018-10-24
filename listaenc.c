#include <listaenc.h>
#include <stdio.h>

int estaEmOrdem (struct Lista *lista)
{
	struct No *ant = lista->prim;
	struct No *atual = ant->prox;
	
	if (atual == NULL || ant == NULL)
		return 1;
		
	while (ant->dado < atual->dado && atual->prox != NULL)
	{
		ant = atual;
		atual = atual->prox;
	}
	if (atual->prox == NULL)
		return 1;
	else 
		return 0;
}

void inicializar (struct ListaEnc *lista)
{
	lista->prim =NULL;
	lista->ult =NULL;
	lista->qtd =0;
}

int inserir (struct ListaEnc *lista, int dado)
{
	struct No *novo = (struct No*) malloc (sizeof(struct No));
    if(novo == NULL)
        return 0;
        
    novo -> dado = dado;
    novo -> Prox = NULL;
    
    if(lista->prim == NULL)
        lista->prim = novo;
    else
        lista->ult->prox = novo;

    lista->ult = novo;
    lista->qtd++;
    return 1;
}

void imprimir (struct ListaEnc *lista, int dado)
{
	struct No *no = buscar(lista, dado);
	if (no == NULL)
		return 0;
	printf ("%d", no->dado);
}

int alterar (struct ListaEnc *lista, int antes, int depois)
{
	struct No *no = buscar(lista, antes);
	
	if (no == NULL)
		return 0;
	no->dado = depois;
	return 1;
}

struct No* buscar (struct ListaEnc *lista, int dado)
{
	struct No *atual = lista->prim;
	while (atual->dado != NULL)
		if (atual->dado == dado)
			return atual;
		else
			atual = atual->prox;
	return NULL;
}

int excluir (struct ListaEnc *lista, int dado)
{
	struct No *ant = NULL;
	struct No *atual = lista->prim;
	
	while (atual->dado != NULL)
		if (atual->dado != dado && atual->dado != dado)
		{
			ant = atual;
			atual = atual->prox;
		}
	if (atual == NULL)
		return 0;
	if (ant == NULL)
		lista->prim = atual->prox;
	else 
		ant->prox = atual->prox;
		
	free(atual);
	
	if(lista->ult == atual)
		lista->ult = ant;
		
	lista->qtd--;
	return 1;
}







