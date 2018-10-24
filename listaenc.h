#ifndef LISTAENCHINCLUDED
#define LISTAENCHINCLUDED

struct No
{
    int dado;
    struct No *prox;
};

struct ListaEnc
{
    struct No *prim, *ult;
    int qtd;
};

void inicializar(struct ListaEnc *lista);

void inicializar_2(struct ListaEnc *lista); // novo inicializar //

int inserir(struct ListaEnc *lista, int dado);

int inserir_2(struct ListaEnc *lista , int dado); //novo inserir//

void imprimir(struct ListaEnc *lista);

void imprimir_2(Struct ListaEnc *lista); // novo imprimir//

int excluir(struct ListaEnc *lista, int dado);
int alterar(struct ListaEnc *lista, int antes, int depois);
struct No* buscar(struct ListaEnc *lista, int dado);

int estaEmOrdem (struct ListaEnc *lista);
int inserirEmOrdem (struct ListaEnc *lista, int dado);
void Ordenar (struct ListaEnc *lista);
void inverter (struct ListaEnc *lista);


#endif
