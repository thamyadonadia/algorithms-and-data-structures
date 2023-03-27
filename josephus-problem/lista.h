#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

// inicializa a lista vazia 
Lista* inicLista();

int getElemento(Lista* lista);

Lista* insere(Lista* lista, int index);

int retira(Lista* lista, int index);

// liberação da memória alocada para a lista 
void liberaLista(Lista* lista);

#endif