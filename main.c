#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
};
typedef struct elemento Elemento;


Elemento* criar_vetor() {
    return NULL;
}

Elemento* inserir_elemento(Elemento *vetor, int info) {
    Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
    novo->info = info;
    novo->prox = vetor;
    return novo;
    }

int main() {
    int vetor_antigo[6] = {875, 23, 24, 87, 75, 329};
    
    Elemento *vetor = criar_vetor();
    vetor = inserir_elemento(vetor, 875);
    vetor = inserir_elemento(vetor, 23);
    vetor = inserir_elemento(vetor, 24);
    vetor = inserir_elemento(vetor, 87);
    vetor = inserir_elemento(vetor, 75);
    vetor = inserir_elemento(vetor, 329);

    return 0;
}

