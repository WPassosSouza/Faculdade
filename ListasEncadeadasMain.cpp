#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    struct Lista L;

    //struct No *Prim = NULL;
    //struct No *Ult = NULL;
    //int vet[6] = {3, 1, 4, 8, 20, 12};

    inicializar(L);
    adicionar(L,3);
    adicionar(L,1);
    adicionar(L,4);
    adicionar(L,8);
    
    listar(L);
    adicionar(L,10);
    return 0;
}
