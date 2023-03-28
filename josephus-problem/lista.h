#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

// inicializa a lista vazia 
Lista* inicLista();

Lista* insere(Lista* lista, int index);

int retira(Lista* lista, int m, int ult);

// liberação da memória alocada para a lista 
void liberaLista(Lista* lista);

int getElemento(Lista* lista);
#endif