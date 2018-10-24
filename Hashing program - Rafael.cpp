#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define N 30000

struct No
{
    char key[255];
    char value[1024];
    struct No *prox;
};

// Função de hash
int h(const char *key)
{
    unsigned int x = 0;
    for (int i = 0; key[i] != 0; i++)
        x = x + key[i] * i * i;
    return x % N;
}

// Função de inclusão
void inclui(struct No *hash[], const char key[], const char value[])
{
    unsigned int pos = h(key);

    struct No *novo = (struct No*) malloc(sizeof(struct No));
    strcpy(novo->key, key);
    strcpy(novo->value, value);
    novo->prox = hash[pos];

    hash[pos] = novo;
}

char* obter(struct No *hash[], const char key[])
{
    int pos = h(key);

    struct No *atual = hash[pos];
    while (atual != NULL)
    {
        if (strcmp(atual->key, key) == 0)
            return atual->value;
        atual = atual->prox;
    }
    return NULL;
}

char *stringAleatoria(int n)
{
    char *res = (char *) malloc(sizeof(char) * (n + 1));
    for (int i = 0; i < n; i++)
        res[i] = rand() % 26 + 'A';
    return res;
}

#define N_ALEATORIO 50000

char keys[N_ALEATORIO][9];
char values[N_ALEATORIO][51];

int main()
{
//    printf("%d\n", h("ZZZZZZZZZ"));
//    return 0;

    srand (time(NULL));

    struct No *hash[N];

    // Gerar dados aleatorios
    for (int i = 0; i < N_ALEATORIO; i++)
    {
        strcpy(keys[i], stringAleatoria(8));
        strcpy(values[i], stringAleatoria(50));
    }

    clock_t inicio = clock();

    // Inicializar
    for (int i = 0; i < N; i++)
        hash[i] = NULL;

    for (int i = 0; i < N_ALEATORIO; i++)
        inclui(hash, keys[i], values[i]);

    for (int i = 0; i < N_ALEATORIO; i++)
        if (!obter(hash, keys[i]))
            printf("erro\n");

    clock_t total = clock() - inicio;

    printf("%f\n", float(total) / CLOCKS_PER_SEC);

    return 0;
}
